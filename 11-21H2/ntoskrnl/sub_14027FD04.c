/*
 * XREFs of sub_14027FD04 @ 0x14027FD04
 * Callers:
 *     sub_1406F5BB0 @ 0x1406F5BB0 (sub_1406F5BB0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 */

void __fastcall sub_14027FD04(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  char v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h]

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = sub_1402CF4F0(a1);
    v7 = sub_14027D6E0(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v14);
    v15 = v7;
    if ( v7 == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v8 = 0LL;
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_17;
      do
      {
        v9 = *(_QWORD *)(a2 + 8 * v8 + 24);
        v14 = sub_140317A10(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v14 & 1) != 0 && (sub_14033A410(v10, v9) & 0xF) != 0xA )
        {
          v11 = sub_140317A10(&v14);
          if ( _bittest64((const signed __int64 *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40), 0x28u)
            || (v12 = *(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8), v12 < 0)
            || !v12 )
          {
            *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * v8 + 24);
            v5 = (unsigned int)(v5 + 1);
          }
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *(_DWORD *)(a2 + 12) );
      v7 = v15;
      if ( (_DWORD)v5 )
      {
        *(_DWORD *)(a2 + 12) = v5;
        sub_1402C1D70(a1, a2, 0LL);
      }
      else
      {
LABEL_17:
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
    sub_14020D8D0(a1, v7);
    LOBYTE(v13) = v6;
    sub_1402B0CE0(a1, v13);
  }
}
