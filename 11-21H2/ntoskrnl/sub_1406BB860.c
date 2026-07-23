/*
 * XREFs of sub_1406BB860 @ 0x1406BB860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406BBA30 @ 0x1406BBA30 (sub_1406BBA30.c)
 *     sub_1406BBAAC @ 0x1406BBAAC (sub_1406BBAAC.c)
 *     sub_140722584 @ 0x140722584 (sub_140722584.c)
 *     ObSetSecurityDescriptorInfo @ 0x1407255D0 (ObSetSecurityDescriptorInfo.c)
 *     sub_140862E50 @ 0x140862E50 (sub_140862E50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BB860(
        __int64 a1,
        int a2,
        DWORD *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        POOL_TYPE PoolType,
        GENERIC_MAPPING *a8)
{
  int v9; // edx
  __int64 v10; // rdx
  int v12; // ebx
  SIZE_T v13; // rdx
  PVOID PoolWithTag; // rax
  void *v15; // r14
  int v16; // eax
  POOL_TYPE v17[2]; // [rsp+20h] [rbp-F8h]
  PGENERIC_MAPPING v18; // [rsp+28h] [rbp-F0h]
  unsigned int i; // [rsp+70h] [rbp-A8h] BYREF
  int v20; // [rsp+74h] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-A0h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-88h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return sub_1406BBA30(a1, a4, a8, a6);
      }
      else
      {
        return sub_1406BBAAC(a6, v10, a8);
      }
    }
    else
    {
      return sub_140722584(a1, a3, a4, a5);
    }
  }
  else
  {
    DestinationString = 0LL;
    v12 = ObSetSecurityDescriptorInfo((PVOID)a1, a3, a4, PoolType, a8);
    if ( v12 >= 0 )
    {
      v13 = 1024LL;
      for ( i = 1024; ; v13 = i )
      {
        PoolWithTag = ExAllocatePoolWithTag(PoolType, v13, 0x70696D57u);
        v15 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        v20 = -1;
        v16 = sub_140722584(a1, &v20, PoolWithTag, &i);
        v12 = v16;
        if ( v16 != -1073741789 )
          break;
        ExFreePoolWithTag(v15, 0);
      }
      if ( v16 >= 0 )
      {
        LODWORD(v18) = *(unsigned __int16 *)(a1 + 30);
        v17[0] = *(unsigned __int16 *)(a1 + 28);
        sub_1402E1280(
          SourceString,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *(unsigned int *)(a1 + 24),
          *(_QWORD *)v17,
          v18,
          *(unsigned __int8 *)(a1 + 32),
          *(unsigned __int8 *)(a1 + 33),
          *(unsigned __int8 *)(a1 + 34),
          *(unsigned __int8 *)(a1 + 35),
          *(unsigned __int8 *)(a1 + 36),
          *(unsigned __int8 *)(a1 + 37),
          *(unsigned __int8 *)(a1 + 38),
          *(unsigned __int8 *)(a1 + 39));
        RtlInitUnicodeString(&DestinationString, SourceString);
        v12 = sub_140862E50(&DestinationString, v15);
        ExFreePoolWithTag(v15, 0);
      }
    }
    return (unsigned int)v12;
  }
}
