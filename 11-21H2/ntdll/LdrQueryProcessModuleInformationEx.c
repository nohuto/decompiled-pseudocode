/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x1800016A4
 * Callers:
 *     LdrQueryProcessModuleInformation @ 0x180001390 (LdrQueryProcessModuleInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x180001558 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        void *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdi
  unsigned int *v10; // rcx
  int v11; // r13d
  __int64 v12; // r14
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

  v24 = a1;
  v7 = 8;
  if ( a4 < 8 )
  {
    v8 = -1073741820;
    v17 = 0LL;
  }
  else
  {
    *a3 = 0;
    v17 = a3 + 2;
    v8 = 0;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v24 = &LdrpLocalProcess;
  v9 = 0LL;
  v10 = a5;
  while ( 1 )
  {
    v19[1] = v9;
    if ( v9 >= (unsigned __int64)(a2 & 1) + 1 )
      return v8;
    v11 = 10240;
    LODWORD(v12) = 1;
    if ( v10 )
      *v10 = v7;
    v22 = a2 & 2;
    if ( (a2 & 2) != 0 )
      off_18012CF60[5 * v9 + 3]();
    v13 = ((__int64 (__fastcall *)(void *, _QWORD *, __int64 *))off_18012CF60[5 * v9])(v24, v19, &v21);
    if ( v13 < 0 )
      goto LABEL_26;
    if ( !v19[0] )
      goto LABEL_27;
    v13 = ((__int64 (__fastcall *)(void *, _QWORD, __int64 *))off_18012CF60[5 * v9 + 1])(v24, v19[0], &v18);
    if ( v13 < 0 )
    {
LABEL_26:
      v8 = v13;
    }
    else
    {
      while ( 1 )
      {
        v14 = v18;
        if ( v18 == v19[0] )
          break;
        if ( !v11 )
        {
          v8 = -1073741271;
          break;
        }
        v20 = --v11;
        v7 += 296 * v12;
        LODWORD(v12) = 1;
        v15 = a4;
        if ( a4 < v7 )
        {
          v8 = -1073741820;
        }
        else
        {
          v13 = ((__int64 (__fastcall *)(void *, _DWORD *, __int64, __int64, __int64))off_18012CF60[5 * v9 + 2])(
                  v24,
                  v17,
                  v18,
                  v21,
                  a2);
          if ( v13 < 0 )
            goto LABEL_26;
          v12 = *((_QWORD *)v17 + 2) != 0LL;
          v17 += 74 * v12;
          v23 = v17;
          v14 = v18;
          v15 = a4;
        }
        if ( a3 && v15 >= 0x130 )
          *a3 += v12;
        v13 = ((__int64 (__fastcall *)(void *, __int64, __int64 *))off_18012CF60[5 * v9 + 1])(v24, v14, &v18);
        if ( v13 < 0 )
          goto LABEL_26;
      }
    }
LABEL_27:
    if ( v22 )
      off_18012CF60[5 * v9 + 4]();
    v10 = a5;
    if ( a5 )
      *a5 = v7;
    ++v9;
  }
}
