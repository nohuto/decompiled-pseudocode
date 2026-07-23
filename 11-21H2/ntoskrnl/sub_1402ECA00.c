/*
 * XREFs of sub_1402ECA00 @ 0x1402ECA00
 * Callers:
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 *     sub_1404226D0 @ 0x1404226D0 (sub_1404226D0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 * Callees:
 *     sub_1402EDFE8 @ 0x1402EDFE8 (sub_1402EDFE8.c)
 *     sub_140571770 @ 0x140571770 (sub_140571770.c)
 */

void __fastcall sub_1402ECA00(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned __int8 v12; // al
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax

  CurrentThread = a2;
  if ( a2 )
  {
    v6 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
  }
  v7 = *((unsigned __int8 *)CurrentThread + 2);
  if ( (v7 & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 33968);
    v9 = *(_QWORD *)(a1 + 33976);
    if ( !v8 || !v9 )
      goto LABEL_10;
    if ( *(_BYTE *)(v9 + 100) )
    {
      v10 = *(_DWORD *)(v9 + 116);
    }
    else
    {
      v10 = *(_DWORD *)(v9 + 72);
      if ( v10 >= *(_DWORD *)(v8 + 512) )
        v10 = *(_DWORD *)(v8 + 512);
    }
    if ( v10 < 0x4B )
      v11 = v10 / 0x19;
    else
LABEL_10:
      v11 = 3;
    if ( dword_140D068FC )
      v12 = *(_BYTE *)(a1 + 34056);
    else
      v12 = *(_BYTE *)(a1 + 34059);
    a2 = (struct _KTHREAD *)(a1 + 8 * (v12 + 2 * (v11 + 2088LL)));
    *(_QWORD *)a2 += a3;
  }
  if ( (v7 & 0x40) != 0 )
  {
    v16 = *((_QWORD *)CurrentThread + 121);
    if ( v16 )
      *(_BYTE *)(v16 + 64) = 1;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v6 )
  {
    if ( (v7 & 0xB6) != 0 )
    {
      if ( *((_QWORD *)CurrentThread + 45) )
      {
        LOBYTE(a2) = 1;
        sub_140571770(CurrentThread, a2);
      }
      _enable();
      if ( (*((_BYTE *)CurrentThread + 2) & 4) == 0 )
        goto LABEL_20;
      v13 = *((_DWORD *)CurrentThread + 30);
      if ( (v13 & 0x800) == 0 )
      {
        if ( (v13 & 0x600) != 0 )
          goto LABEL_20;
        v14 = *((_QWORD *)CurrentThread + 13);
        if ( !v14 )
          goto LABEL_20;
        v15 = *(unsigned int *)(a1 + 216) + v14;
        if ( !v15 )
          goto LABEL_20;
        while ( (*(_BYTE *)(v15 + 112) & 2) == 0 )
        {
          v15 = *(_QWORD *)(v15 + 408);
          if ( !v15 )
            goto LABEL_20;
        }
      }
      LOBYTE(v7) = 1;
      sub_1402EDFE8(a1, CurrentThread, v7);
    }
    else
    {
      _enable();
    }
LABEL_20:
    if ( byte_140D068F8 )
    {
      *((_QWORD *)CurrentThread + 135) = 0LL;
      *((_QWORD *)CurrentThread + 134) = __rdtsc();
    }
    return;
  }
  if ( (v7 & 2) != 0 )
    sub_140571770(CurrentThread, 0LL);
}
