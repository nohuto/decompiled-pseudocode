/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x140A3074C
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiResolveImageImports @ 0x1407BCD10 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407D46B4 (MiProcessKernelCfgImageLoadConfig.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C44FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdi
  _QWORD *Pool; // rax
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 *v10; // rax
  int v11; // [rsp+20h] [rbp-79h]
  int v12; // [rsp+28h] [rbp-71h]
  int v13; // [rsp+40h] [rbp-59h] BYREF
  int v14; // [rsp+44h] [rbp-55h] BYREF
  __int64 v15; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-29h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  __int64 v21; // [rsp+90h] [rbp-9h]
  _DWORD v22[2]; // [rsp+98h] [rbp-1h] BYREF
  int *v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A8h] [rbp+Fh]
  int v25; // [rsp+ACh] [rbp+13h]
  int *v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B8h] [rbp+1Fh]
  int v28; // [rsp+BCh] [rbp+23h]
  __int64 *v29; // [rsp+C0h] [rbp+27h]
  int v30; // [rsp+C8h] [rbp+2Fh]
  int v31; // [rsp+CCh] [rbp+33h]

  if ( *(_QWORD *)&qword_140C698E8 )
  {
    if ( **(_DWORD **)&qword_140C698E8 > 5u )
    {
      if ( tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000000LL) )
      {
        tlgCreate1Sz_char((__int64)v17, Src);
        v20 = 0;
        v22[1] = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v18 = v22;
        v21 = *(_QWORD *)(a2 + 96);
        v22[0] = *(unsigned __int16 *)(a2 + 88);
        v13 = *(_DWORD *)(a2 + 120);
        v23 = &v13;
        v14 = *(_DWORD *)(a2 + 156);
        v26 = &v14;
        v15 = 2164260864LL;
        v24 = 4;
        v27 = 4;
        v29 = &v15;
        v30 = 8;
        v19 = 2;
        tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&word_1400386AA, v4, 1u, v11, v12, 8u, &v16);
      }
    }
  }
  else
  {
    v6 = -1LL;
    do
      ++v6;
    while ( Src[v6] );
    Pool = MiAllocatePool(256, v6 + *(unsigned __int16 *)(a2 + 88) + 49LL, 0x46446D4Du);
    v8 = (__int64)Pool;
    if ( Pool )
    {
      Pool[2] = Pool + 6;
      memmove(Pool + 6, Src, v6 + 1);
      v9 = (void *)(v8 + v6 + 49);
      *(_QWORD *)(v8 + 32) = v9;
      memmove(v9, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v8 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v8 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v8 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v8 + 44) = *(_DWORD *)(a2 + 156);
      v10 = (__int64 *)qword_140C65910;
      if ( *(PVOID **)qword_140C65910 != &qword_140C65908 )
        __fastfail(3u);
      *(_QWORD *)v8 = &qword_140C65908;
      *(_QWORD *)(v8 + 8) = v10;
      *v10 = v8;
      qword_140C65910 = v8;
    }
  }
}
