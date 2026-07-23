/*
 * XREFs of sub_140693498 @ 0x140693498
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     sub_140213398 @ 0x140213398 (sub_140213398.c)
 *     sub_14021372C @ 0x14021372C (sub_14021372C.c)
 *     sub_14021378C @ 0x14021378C (sub_14021378C.c)
 *     sub_140215598 @ 0x140215598 (sub_140215598.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_14025C03C @ 0x14025C03C (sub_14025C03C.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1406F8804 @ 0x1406F8804 (sub_1406F8804.c)
 *     sub_1406FC9C4 @ 0x1406FC9C4 (sub_1406FC9C4.c)
 *     sub_1406FCFF0 @ 0x1406FCFF0 (sub_1406FCFF0.c)
 *     sub_1407B83C0 @ 0x1407B83C0 (sub_1407B83C0.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 sub_140693498(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  unsigned int v9; // edi
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r12
  NTSTATUS v16; // esi
  unsigned __int64 v17; // r12
  int v18; // eax
  char v19; // rax^4
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // rsi
  int v22; // r9d
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // [rsp+28h] [rbp-A0h]
  int v27; // [rsp+38h] [rbp-90h]
  unsigned __int64 v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+50h] [rbp-78h]
  unsigned __int64 v30; // [rsp+58h] [rbp-70h]
  __int64 v31; // [rsp+60h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-60h]
  unsigned __int64 v33; // [rsp+70h] [rbp-58h]
  unsigned __int64 v34; // [rsp+78h] [rbp-50h]
  unsigned __int64 v35; // [rsp+80h] [rbp-48h]
  unsigned __int64 v38; // [rsp+E8h] [rbp+20h] BYREF
  va_list va; // [rsp+E8h] [rbp+20h]
  __int64 v40; // [rsp+F0h] [rbp+28h]
  va_list va1; // [rsp+F8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  if ( (v38 & 0xFFF) != 0 )
    RtlRaiseStatus(-1073741503);
  v4 = (unsigned __int64 *)(a1 + 48);
  v30 = a1 + 48;
  v5 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v28 = v5;
  v6 = sub_1402828F0(64, 0x40uLL, 0x6C646156u);
  v7 = (__int64)v6;
  if ( !v6 )
    RtlRaiseStatus(-1073741670);
  v8 = v40;
  v6[5] = 0LL;
  v6[2] = -2LL;
  v9 = ((v8 >> 31) & 0xFFFFFFFD) + 4;
  if ( a3 )
  {
    if ( a3 == 2 )
      v9 |= 0x18u;
  }
  else
  {
    v9 |= 8u;
  }
  v10 = 0LL;
  *((_DWORD *)v6 + 12) = v6[6] & 0xFFFFF01F | ((v9 & 0x1F) << 7) | 0x10200010;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = *((_QWORD *)CurrentThread + 23);
  sub_14030B820((__int64)CurrentThread, v11);
  if ( (*(_DWORD *)(v11 + 1124) & 0x20) != 0 )
  {
    v16 = -1073741558;
    goto LABEL_31;
  }
  v12 = sub_1406FC9C4(v11, 0LL);
  v14 = v38;
  v15 = v5 << 12;
  if ( v38 )
  {
    if ( !(unsigned int)sub_1406F8804(v11, v38, (_DWORD)v5 << 12, 0, v12) )
    {
      v16 = -1073741800;
      goto LABEL_31;
    }
  }
  else
  {
    v16 = sub_1407B83C0(
            0,
            v13,
            v12,
            (_DWORD)v5 << 12,
            0x10000LL,
            v13 & v26,
            v9,
            (unsigned int)v13 & v27,
            (__int64)&v31,
            (__int64)va);
    if ( v16 < 0 )
      goto LABEL_31;
    v14 = v38;
    v5 = v28;
  }
  v35 = v14 + v15 - 1;
  v34 = v14 >> 12;
  v33 = v35 >> 12;
  sub_14030B420(v7, v14 >> 12);
  v38 = 0LL;
  v17 = v28;
  *(_DWORD *)(v7 + 28) = v18;
  *(_BYTE *)(v7 + 33) = v19;
  if ( v5 )
  {
    v20 = v4;
    do
    {
      v21 = *v20;
      if ( (unsigned int)sub_1402B2E00(*v20) )
      {
        v29 = 48 * v21 - 0x220000000000LL;
        v16 = sub_14021378C(v29);
        if ( v16 < 0 || !(unsigned int)sub_14021372C(v29) )
          goto LABEL_31;
      }
      else
      {
        v24 = sub_140215598(v21);
        v16 = sub_140215E54(1, v24, 1LL, a3, 0LL, 0LL);
        if ( v16 < 0 )
          goto LABEL_31;
      }
      v10 = v30;
      v20 = (unsigned __int64 *)(v30 + 8);
      ++v38;
      v30 += 8LL;
    }
    while ( v38 < v17 );
  }
  v16 = sub_1407B88C0(v7, v11);
  if ( v16 < 0 )
  {
LABEL_31:
    sub_140281A58((__int64)CurrentThread, v11);
    if ( v10 )
    {
      while ( (unsigned __int64)v4 <= v10 )
      {
        v25 = *v4;
        if ( (unsigned int)sub_1402B2E00(*v4) )
          sub_14025C03C(48 * v25 - 0x220000000000LL);
        else
          sub_140215AA8(1, v25, 1uLL);
        ++v4;
      }
    }
    ExFreePoolWithTag((PVOID)v7, 0);
    RtlRaiseStatus(v16);
  }
  if ( v31 )
    sub_1406FCFF0(v34, v33);
  sub_14030B7F0((__int64)CurrentThread, v7);
  sub_140213398(v14, (__int64)v4, 0LL, a3, v17, v7, v40);
  sub_140281A58((__int64)CurrentThread, v11);
  sub_14030EB64(v7);
  v22 = 2;
  if ( v9 != 1 )
    v22 = 4;
  if ( !sub_1407B9190(v7, v14, v35, v22, 0) )
  {
    sub_1407BC0B0((PVOID)v7);
    RtlRaiseStatus(-1073741670);
  }
  sub_14032E700((char *)v7);
  return v14 + *(unsigned int *)(a1 + 44);
}
