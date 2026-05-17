/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800D9E58
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x1800014C0 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrpReadMemory @ 0x180001250 (LdrpReadMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx2(void *a1, __int64 a2, _WORD *a3, unsigned int a4, int *a5)
{
  _WORD *v5; // rsi
  void *v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // edi
  unsigned __int64 v9; // r15
  unsigned int *v10; // rcx
  int v11; // r13d
  __int64 v12; // rax
  int Memory; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r9
  int v20; // [rsp+34h] [rbp-94h]
  __int64 v21; // [rsp+38h] [rbp-90h]
  int v22; // [rsp+40h] [rbp-88h]
  __int64 v23; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-78h] BYREF
  int v25; // [rsp+54h] [rbp-74h]
  __int64 v26; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-68h]
  int v28; // [rsp+68h] [rbp-60h]
  __int64 v29; // [rsp+70h] [rbp-58h] BYREF
  __int64 v30; // [rsp+78h] [rbp-50h]
  _WORD *v31; // [rsp+80h] [rbp-48h]
  __int16 v32; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+10h]
  unsigned int v34; // [rsp+E8h] [rbp+20h]

  v34 = a4;
  v33 = a2;
  v5 = a3;
  v6 = a1;
  v7 = 2;
  v20 = 2;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v8 = 0;
  }
  else
  {
    v8 = -1073741820;
    v5 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v6 = &LdrpLocalProcess;
  v9 = 0LL;
  v27 = 0LL;
  v10 = (unsigned int *)a5;
  while ( v9 < (unsigned __int64)(a2 & 1) + 1 )
  {
    v22 = 10240;
    v11 = 1;
    if ( v10 )
      *v10 = v7;
    v30 = a2 & 2;
    if ( (a2 & 2) != 0 )
    {
      v21 = 5 * v9;
      off_180131F00[5 * v9 + 3]();
      v12 = 5 * v9;
    }
    else
    {
      v12 = 5 * v9;
      v21 = 5 * v9;
    }
    Memory = ((__int64 (__fastcall *)(void *, __int64 *, __int64 *))off_180131F00[v12])(v6, &v26, &v29);
    if ( Memory < 0 )
    {
LABEL_15:
      v8 = Memory;
      goto LABEL_37;
    }
    if ( v26 )
    {
      Memory = ((__int64 (__fastcall *)(void *, __int64, __int64 *))off_180131F00[v21 + 1])(v6, v26, &v23);
      if ( Memory < 0 )
        goto LABEL_15;
      while ( v23 != v26 )
      {
        v14 = v22;
        if ( !v22 )
        {
          v8 = -1073741271;
          break;
        }
        --v22;
        v28 = v14 - 1;
        v7 += 320 * v11;
        v20 = v7;
        v11 = 1;
        v25 = 1;
        if ( v34 >= v7 )
        {
          *v5 = 320;
          Memory = ((__int64 (__fastcall *)(void *, _WORD *, __int64, __int64, __int64))off_180131F00[v21 + 2])(
                     v6,
                     v5 + 4,
                     v23,
                     v29,
                     v33);
          if ( Memory < 0 )
            goto LABEL_15;
          v15 = *((_QWORD *)v5 + 3);
          if ( v15 )
          {
            Memory = LdrpReadMemory((__int64)v6, v15 + 60, (__int64)&v24, 4LL);
            if ( Memory < 0 )
              goto LABEL_15;
            v16 = *((_QWORD *)v5 + 3) + v24;
            Memory = LdrpReadMemory((__int64)v6, v16 + 8, (__int64)(v5 + 154), 4LL);
            if ( Memory < 0 )
              goto LABEL_15;
            Memory = LdrpReadMemory((__int64)v6, v16 + 88, (__int64)(v5 + 152), 4LL);
            if ( Memory < 0 )
              goto LABEL_15;
            Memory = LdrpReadMemory((__int64)v6, v16 + 24, (__int64)&v32, 2LL);
            if ( Memory < 0 )
              goto LABEL_15;
            if ( v32 == 267 )
            {
              v17 = v16 + 52;
              v18 = 4LL;
            }
            else
            {
              v17 = v16 + 48;
              v18 = 8LL;
            }
            Memory = LdrpReadMemory((__int64)v6, v17, (__int64)(v5 + 156), v18);
            if ( Memory < 0 )
              goto LABEL_15;
            v5 += 160;
            v31 = v5;
            *v5 = 0;
            v7 = v20;
          }
          else
          {
            v11 = 0;
            v25 = 0;
          }
        }
        else
        {
          v8 = -1073741820;
        }
        Memory = ((__int64 (__fastcall *)(void *, __int64, __int64 *))off_180131F00[v21 + 1])(v6, v23, &v23);
        if ( Memory < 0 )
          goto LABEL_15;
      }
    }
LABEL_37:
    if ( v30 )
      off_180131F00[v21 + 4]();
    v10 = (unsigned int *)a5;
    v7 = v20;
    if ( a5 )
      *a5 = v20;
    v27 = ++v9;
    LOBYTE(a2) = v33;
  }
  return v8;
}
