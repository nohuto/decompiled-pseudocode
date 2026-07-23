/*
 * XREFs of sub_140A94590 @ 0x140A94590
 * Callers:
 *     sub_140A942C0 @ 0x140A942C0 (sub_140A942C0.c)
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_140590A00 @ 0x140590A00 (sub_140590A00.c)
 */

void __fastcall sub_140A94590(ULONG_PTR *a1, unsigned int a2)
{
  ULONG_PTR *v2; // rbx
  __int64 v3; // rsi
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // rdi
  char v6; // bp
  int v7; // eax
  ULONG_PTR v8; // rdx

  if ( a1 )
  {
    v2 = a1;
    if ( a2 )
    {
      v3 = a2;
      while ( 1 )
      {
        v4 = *v2;
        if ( !*v2 )
          goto LABEL_16;
        v5 = v2[2];
        if ( !v5 )
          goto LABEL_16;
        v6 = BYTE4(qword_140D01450);
        if ( (qword_140D01450 & 0x800000000LL) == 0
          || (unsigned int)sub_1402DA4B0() && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v6 & 2) != 0) )
        {
          goto LABEL_13;
        }
        v7 = *(_DWORD *)(v5 + 32);
        if ( (v7 & 1) != 0 )
          break;
LABEL_16:
        v2 += 3;
        if ( !--v3 )
          return;
      }
      if ( (v7 & 4) != 0 )
LABEL_13:
        v8 = *(_QWORD *)(v5 + 8);
      else
        v8 = **(_QWORD **)(v5 + 40);
      if ( v8 )
        sub_140590A00(v4, v8);
      goto LABEL_16;
    }
  }
}
