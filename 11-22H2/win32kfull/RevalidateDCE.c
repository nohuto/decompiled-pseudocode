/*
 * XREFs of RevalidateDCE @ 0x1C008F0E0
 * Callers:
 *     DeleteHrgnClip @ 0x1C008ED20 (DeleteHrgnClip.c)
 *     UpdateRedirectedDCE @ 0x1C008EDF0 (UpdateRedirectedDCE.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0233DC4 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     InvalidateDCE @ 0x1C008F178 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x1C008F1F0 (SpbCheckDce.c)
 */

__int64 __fastcall RevalidateDCE(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r8d
  bool v6; // zf
  __int64 v8; // r8
  __int64 v9; // rax

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 0x1000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 24);
    if ( v1 >= 0 )
    {
      v1 &= 0x7FFFFFE7u;
      *(_DWORD *)(a1 + 64) = v1;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 8LL) + 8LL) >= 0
        || (v8 = *(_QWORD *)(v3 + 40), (*(_BYTE *)(v8 + 21) & 1) == 0)
        && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 2) != 0
        || (v9 = *(_QWORD *)(v4 + 40), ((*(_BYTE *)(v8 + 31) ^ *(_BYTE *)(v9 + 31)) & 0x10) != 0) )
      {
        v5 = v1;
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x22) == 2 )
        {
          v5 = v1 | 8;
          *(_DWORD *)(a1 + 64) = v1 | 8;
        }
        v1 = v5;
        v6 = (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 4) == 0;
      }
      else
      {
        v6 = (*(_BYTE *)(v9 + 31) & 4) == 0;
      }
      if ( !v6 )
        v1 |= 0x10u;
    }
    *(_DWORD *)(a1 + 64) = v1 | 0x2000;
    return UserSetDCVisRgn(a1);
  }
  else
  {
    SpbCheckDce(a1);
    return InvalidateDCE(a1);
  }
}
