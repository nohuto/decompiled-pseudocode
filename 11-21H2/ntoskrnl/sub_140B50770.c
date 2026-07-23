/*
 * XREFs of sub_140B50770 @ 0x140B50770
 * Callers:
 *     sub_140B0F0F4 @ 0x140B0F0F4 (sub_140B0F0F4.c)
 *     sub_140B0F180 @ 0x140B0F180 (sub_140B0F180.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14082EB54 @ 0x14082EB54 (sub_14082EB54.c)
 *     sub_14082EBA4 @ 0x14082EBA4 (sub_14082EBA4.c)
 *     sub_14082EBE0 @ 0x14082EBE0 (sub_14082EBE0.c)
 *     sub_140946BB8 @ 0x140946BB8 (sub_140946BB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B50770(void *a1, __int64 a2)
{
  _WORD *Pool2; // rbx
  unsigned int v3; // esi
  int v6; // eax
  ULONG i; // r14d
  __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  _BYTE v14[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  void *v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18[528]; // [rsp+50h] [rbp-B0h] BYREF

  v15 = 260;
  Pool2 = 0LL;
  v3 = 0;
  v17 = 0LL;
  v16 = 0;
  v6 = sub_14082EBE0((__int64)a1, a1, 0, v18, &v15);
  for ( i = 1; ; ++i )
  {
    v9 = v6;
    if ( v6 == -2147483622 || v6 == -1073741444 )
      break;
    if ( v6 < 0 )
      goto LABEL_28;
    if ( (int)sub_14082EBA4(*(__int64 *)&qword_140D00AC0, (__int64)a1, (__int64)v18, 0, 1u, (__int64)&v17) >= 0 )
    {
      if ( a2 )
      {
        v9 = sub_14042A5E0(v18, v17);
        if ( v9 < 0 )
          goto LABEL_28;
      }
      v15 = v3;
      v10 = sub_14082EB54(v8, v17, L"DependOnFirmware", &v16, Pool2, &v15);
      if ( v10 == -1073741789 || v10 == -2147483643 )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0x42706E50u);
        v3 = v15;
        Pool2 = (_WORD *)ExAllocatePool2(256LL, v15, 0x42706E50u);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v10 = sub_14082EB54(v12, v17, L"DependOnFirmware", &v16, Pool2, &v15);
      }
      if ( v10 == -1073741772 )
      {
        if ( Pool2 && v3 >= 2 )
        {
          *Pool2 = 0;
LABEL_20:
          if ( *Pool2 )
          {
            v14[0] = 0;
            if ( (int)sub_140946BB8(Pool2, v14, v11) < 0 || !v14[0] )
              goto LABEL_25;
          }
        }
      }
      else
      {
        if ( v10 < 0 )
          goto LABEL_25;
        if ( Pool2 && v3 >= 2 )
          goto LABEL_20;
      }
      if ( (int)sub_14042A5E0(v18, a1) >= 0 )
        --i;
    }
LABEL_25:
    v15 = 260;
    v6 = sub_14082EBE0(v8, a1, i, v18, &v15);
  }
  v9 = 0;
LABEL_28:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x42706E50u);
  return (unsigned int)v9;
}
