/*
 * XREFs of sub_140709A08 @ 0x140709A08
 * Callers:
 *     sub_1407099A4 @ 0x1407099A4 (sub_1407099A4.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     RtlFindClearBitsAndSetEx @ 0x14029E780 (RtlFindClearBitsAndSetEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030B538 @ 0x14030B538 (sub_14030B538.c)
 *     sub_14030B6D0 @ 0x14030B6D0 (sub_14030B6D0.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_14079EF3C @ 0x14079EF3C (sub_14079EF3C.c)
 */

__int64 __fastcall sub_140709A08(int a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r12
  _QWORD *v10; // r12
  _QWORD *v11; // rsi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // eax
  bool v16; // zf
  char *v17; // rcx
  int v18; // ebx
  int v20; // esi
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int16 v23; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v24; // [rsp+B2h] [rbp+Ah]
  __int64 v25; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v26; // [rsp+C0h] [rbp+18h]
  int v27; // [rsp+C8h] [rbp+20h] BYREF
  int v28; // [rsp+CCh] [rbp+24h]

  v28 = HIDWORD(a4);
  v26 = a3;
  v25 = a2;
  v24 = HIWORD(a1);
  v27 = 0;
  v4 = 0LL;
  v23 = 0;
  v5 = 0LL;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (unsigned __int64)(a2 + 4095) >> 12;
  v8 = *((_QWORD *)CurrentThread + 23);
  v9 = *(_QWORD *)(v8 + 1680);
  --*((_WORD *)CurrentThread + 243);
  sub_14030B820((__int64)CurrentThread, v8);
  if ( (*(_DWORD *)(v8 + 1124) & 0x20) != 0 )
  {
    sub_140281A58((__int64)CurrentThread, v8);
    v16 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v16 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 3221225738LL;
  }
  else
  {
    v10 = (_QWORD *)(v9 + 312);
    while ( 1 )
    {
      sub_14030B6D0((__int64)CurrentThread, v8);
      v11 = (_QWORD *)*v10;
      if ( (_QWORD *)*v10 != v10 )
      {
        while ( 1 )
        {
          ClearBitsAndSet = RtlFindClearBitsAndSetEx(v11 - 2, v7, (unsigned __int64)*((unsigned int *)v11 + 8) >> 2);
          v13 = ClearBitsAndSet;
          if ( ClearBitsAndSet != -1LL )
            break;
          v11 = (_QWORD *)*v11;
          if ( v11 == v10 )
            goto LABEL_7;
        }
        *((_DWORD *)v11 + 6) += v7;
        v14 = v11[4] & 3 | (4 * (ClearBitsAndSet + v7));
        v15 = *((_DWORD *)v11 + 6);
        *((_DWORD *)v11 + 8) = v14;
        if ( v15 >= *((_DWORD *)v11 + 7) )
        {
          v21 = *v11;
          if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v22 = (_QWORD *)v11[1], (_QWORD *)*v22 != v11) )
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          *v11 = 0LL;
        }
        v4 = v11[2];
        v5 = (v13 << 12)
           + ((*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12);
      }
LABEL_7:
      sub_14030B538((__int64)CurrentThread, v8);
      if ( v4 )
        break;
      v20 = sub_1406BF9AC(0, v7);
      if ( v20 < 0 )
      {
        sub_140281A58((__int64)CurrentThread, v8);
        v16 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v16 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
        return (unsigned int)v20;
      }
    }
    sub_14030EB64(v4);
    sub_140281A58((__int64)CurrentThread, v8);
    sub_14030B7F0((__int64)CurrentThread, v4);
    v16 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v16 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    if ( (unsigned int)sub_14030EB80(v4) )
    {
      sub_14032E700(v17);
      return 3221225738LL;
    }
    v18 = sub_14032C1B0((ULONG_PTR)v17, v5, v25, (*(_DWORD *)(v4 + 48) >> 7) & 0x1F, 0, 0LL, 0, 0, 0LL, &v27, &v23);
    if ( v18 < 0 )
    {
      sub_14079EF3C((PVOID)v4);
    }
    else
    {
      sub_14032E700((char *)v4);
      *v26 = v5;
    }
    return (unsigned int)v18;
  }
}
