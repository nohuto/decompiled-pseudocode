/*
 * XREFs of sub_140A1E590 @ 0x140A1E590
 * Callers:
 *     sub_140A1E7F0 @ 0x140A1E7F0 (sub_140A1E7F0.c)
 * Callees:
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1CC1C @ 0x140A1CC1C (sub_140A1CC1C.c)
 *     sub_140A1D808 @ 0x140A1D808 (sub_140A1D808.c)
 *     sub_140A1E268 @ 0x140A1E268 (sub_140A1E268.c)
 *     sub_140A1E6EC @ 0x140A1E6EC (sub_140A1E6EC.c)
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 *     sub_140A1F760 @ 0x140A1F760 (sub_140A1F760.c)
 *     sub_140A20978 @ 0x140A20978 (sub_140A20978.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 */

__int64 __fastcall sub_140A1E590(__int64 a1, __int64 *a2)
{
  int v2; // edi
  __int64 v3; // rbx
  int v6; // eax
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = 0;
  v3 = *a2;
  if ( (__int64 *)*a2 != a2 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v3 + 48);
      if ( (v6 & 0x10) != 0 )
        break;
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 0x24) == 0x20 && !sub_140A1D808() )
        {
          if ( (int)sub_140A1F760(*(_DWORD *)(v3 + 32)) < 0 )
            goto LABEL_21;
          goto LABEL_6;
        }
        v2 = sub_140A1E6EC(a1, v3);
        if ( v2 < 0 || (v2 = sub_140A20DF8(a1, v3), v2 < 0) )
        {
LABEL_23:
          sub_1408138F0(4LL, L"BiBindEfiEntries failed %x", (unsigned int)v2);
          return (unsigned int)v2;
        }
      }
      else if ( (v6 & 4) != 0 )
      {
        if ( (v6 & 8) != 0 )
        {
          v2 = sub_140812B74(a1, (unsigned int *)(v3 + 16), &v8);
          if ( v2 < 0 )
            goto LABEL_23;
          sub_140A1CC1C(v8);
          *(_DWORD *)(v3 + 48) &= 0xFFFFFFF9;
        }
        else if ( !sub_140A1D808() && (int)sub_140A1F234(a1, v3) >= 0 )
        {
          sub_140A1E268(v3);
        }
      }
LABEL_21:
      v3 = *(_QWORD *)v3;
      if ( (__int64 *)v3 == a2 )
        return (unsigned int)v2;
    }
    if ( (v6 & 1) == 0 )
      goto LABEL_21;
    sub_1408138F0(3LL, L"Boot entry exists for DontSync with ID 0x%x", *(unsigned int *)(v3 + 32));
    if ( (int)sub_140A1F760(*(_DWORD *)(v3 + 32)) < 0 )
      goto LABEL_21;
    *(_DWORD *)(v3 + 48) &= ~1u;
LABEL_6:
    sub_140A20978(v3);
    goto LABEL_21;
  }
  return (unsigned int)v2;
}
