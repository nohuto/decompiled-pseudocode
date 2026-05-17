/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x180001644
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x1800014C0 (RtlQueryProcessModuleInformation.c)
 *     LdrQueryProcessModuleInformation @ 0x1800D97E0 (LdrQueryProcessModuleInformation.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        void *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned int *v9; // rcx
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // eax
  _DWORD *v17; // [rsp+38h] [rbp-80h]
  __int64 v18; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-68h] BYREF
  int v20; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+68h] [rbp-50h] BYREF
  __int64 v22; // [rsp+70h] [rbp-48h]
  _DWORD *v23; // [rsp+78h] [rbp-40h]
  void *v24; // [rsp+C0h] [rbp+8h]
  __int64 v25; // [rsp+C8h] [rbp+10h]

  v25 = a2;
  v24 = a1;
  v6 = 8;
  if ( a4 >= 8 )
  {
    *a3 = 0;
    v17 = a3 + 2;
    v7 = 0;
  }
  else
  {
    v7 = -1073741820;
    v17 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v24 = &LdrpLocalProcess;
  v8 = 0LL;
  v9 = a5;
  while ( 1 )
  {
    v19[1] = v8;
    if ( v8 >= (unsigned __int64)(a2 & 1) + 1 )
      return v7;
    v10 = LdrpQueryProcessModuleInformationLoopDetectorCount;
    LODWORD(v11) = 1;
    if ( v9 )
      *v9 = v6;
    v22 = a2 & 2;
    v12 = 5 * v8;
    if ( (a2 & 2) != 0 )
      off_180133F50[5 * v8 + 3]();
    v13 = ((__int64 (__fastcall *)(void *, _QWORD *, __int64 *))off_180133F50[v12])(v24, v19, &v21);
    if ( v13 < 0 )
      goto LABEL_25;
    if ( !v19[0] )
      goto LABEL_27;
    v13 = ((__int64 (__fastcall *)(void *, _QWORD, __int64 *))off_180133F50[v12 + 1])(v24, v19[0], &v18);
    if ( v13 < 0 )
    {
LABEL_25:
      v7 = v13;
    }
    else
    {
      while ( 1 )
      {
        v14 = v18;
        if ( v18 == v19[0] )
          break;
        if ( !v10 )
        {
          v7 = -1073741271;
          break;
        }
        v20 = --v10;
        v6 += 296 * v11;
        LODWORD(v11) = 1;
        v15 = a4;
        if ( a4 >= v6 )
        {
          v13 = ((__int64 (__fastcall *)(void *, _DWORD *, __int64, __int64, __int64))off_180133F50[v12 + 2])(
                  v24,
                  v17,
                  v18,
                  v21,
                  v25);
          if ( v13 < 0 )
            goto LABEL_25;
          v11 = *((_QWORD *)v17 + 2) != 0LL;
          v17 += 74 * v11;
          v23 = v17;
          v14 = v18;
          v15 = a4;
        }
        else
        {
          v7 = -1073741820;
        }
        if ( a3 && v15 >= 0x130 )
          *a3 += v11;
        v13 = ((__int64 (__fastcall *)(void *, __int64, __int64 *))off_180133F50[v12 + 1])(v24, v14, &v18);
        if ( v13 < 0 )
          goto LABEL_25;
      }
    }
LABEL_27:
    if ( v22 )
      off_180133F50[v12 + 4]();
    v9 = a5;
    if ( a5 )
      *a5 = v6;
    ++v8;
    LOBYTE(a2) = v25;
  }
}
