/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800D9DB8
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x180001558 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrpReadMemory @ 0x180001260 (LdrpReadMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx2(void *a1, __int64 a2, _WORD *a3, unsigned int a4, int *a5)
{
  _WORD *v5; // rsi
  void *v6; // r15
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  unsigned __int64 v9; // r12
  unsigned int *v10; // rcx
  int v11; // r13d
  int Memory; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  int v20; // [rsp+34h] [rbp-84h]
  int v21; // [rsp+38h] [rbp-80h]
  __int64 v22; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-70h] BYREF
  int v24; // [rsp+4Ch] [rbp-6Ch]
  __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-60h]
  int v27; // [rsp+60h] [rbp-58h]
  __int64 v28; // [rsp+68h] [rbp-50h] BYREF
  __int64 v29; // [rsp+70h] [rbp-48h]
  _WORD *v30; // [rsp+78h] [rbp-40h]
  __int16 v31; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+10h]
  unsigned int v33; // [rsp+D8h] [rbp+20h]

  v33 = a4;
  v32 = a2;
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
  v26 = 0LL;
  v10 = (unsigned int *)a5;
  while ( v9 < (unsigned __int64)(a2 & 1) + 1 )
  {
    v21 = 10240;
    v11 = 1;
    if ( v10 )
      *v10 = v7;
    v29 = a2 & 2;
    if ( (a2 & 2) != 0 )
      off_18012CF60[5 * v9 + 3]();
    Memory = ((__int64 (__fastcall *)(void *, __int64 *, __int64 *))off_18012CF60[5 * v9])(v6, &v25, &v28);
    if ( Memory < 0 )
      goto LABEL_34;
    if ( !v25 )
      goto LABEL_35;
    Memory = ((__int64 (__fastcall *)(void *, __int64, __int64 *))off_18012CF60[5 * v9 + 1])(v6, v25, &v22);
    if ( Memory < 0 )
    {
LABEL_34:
      v8 = Memory;
    }
    else
    {
      while ( v22 != v25 )
      {
        v13 = v21;
        if ( !v21 )
        {
          v8 = -1073741271;
          break;
        }
        --v21;
        v27 = v13 - 1;
        v7 += 320 * v11;
        v20 = v7;
        v11 = 1;
        v24 = 1;
        if ( v33 >= v7 )
        {
          *v5 = 320;
          Memory = ((__int64 (__fastcall *)(void *, _WORD *, __int64, __int64, __int64))off_18012CF60[5 * v9 + 2])(
                     v6,
                     v5 + 4,
                     v22,
                     v28,
                     v32);
          if ( Memory < 0 )
            goto LABEL_34;
          v14 = *((_QWORD *)v5 + 3);
          if ( v14 )
          {
            Memory = LdrpReadMemory((__int64)v6, v14 + 60, (__int64)&v23, 4LL);
            if ( Memory < 0 )
              goto LABEL_34;
            v15 = *((_QWORD *)v5 + 3) + v23;
            Memory = LdrpReadMemory((__int64)v6, v15 + 8, (__int64)(v5 + 154), 4LL);
            if ( Memory < 0 )
              goto LABEL_34;
            v16 = v15 + 24;
            Memory = LdrpReadMemory((__int64)v6, v16 + 64, (__int64)(v5 + 152), 4LL);
            if ( Memory < 0 )
              goto LABEL_34;
            Memory = LdrpReadMemory((__int64)v6, v16, (__int64)&v31, 2LL);
            if ( Memory < 0 )
              goto LABEL_34;
            if ( v31 == 267 )
            {
              v17 = 28LL;
              v18 = 4LL;
            }
            else
            {
              v17 = 24LL;
              v18 = 8LL;
            }
            Memory = LdrpReadMemory((__int64)v6, v16 + v17, (__int64)(v5 + 156), v18);
            if ( Memory < 0 )
              goto LABEL_34;
            v5 += 160;
            v30 = v5;
            *v5 = 0;
            v7 = v20;
          }
          else
          {
            v11 = 0;
            v24 = 0;
          }
        }
        else
        {
          v8 = -1073741820;
        }
        Memory = ((__int64 (__fastcall *)(void *, __int64, __int64 *))off_18012CF60[5 * v9 + 1])(v6, v22, &v22);
        if ( Memory < 0 )
          goto LABEL_34;
      }
    }
LABEL_35:
    if ( v29 )
      off_18012CF60[5 * v9 + 4]();
    v10 = (unsigned int *)a5;
    v7 = v20;
    if ( a5 )
      *a5 = v20;
    v26 = ++v9;
    LOBYTE(a2) = v32;
  }
  return v8;
}
