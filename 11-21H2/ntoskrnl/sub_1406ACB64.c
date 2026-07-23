/*
 * XREFs of sub_1406ACB64 @ 0x1406ACB64
 * Callers:
 *     sub_140234678 @ 0x140234678 (sub_140234678.c)
 * Callees:
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_14074F700 @ 0x14074F700 (sub_14074F700.c)
 */

void __fastcall sub_1406ACB64(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  while ( v1 )
  {
    v2 = (_BYTE *)v1;
    v1 = *(_QWORD *)(v1 + 8);
    if ( v2[16] )
    {
      sub_14074F700(v2);
    }
    else
    {
      v3 = v2 - 168;
      if ( (*((_DWORD *)v3 + 4) & 0x2000) != 0 )
        sub_140234D58((PIRP)v3, *((_QWORD *)v3 + 24));
      else
        IoFreeIrp((PIRP)v3);
    }
  }
}
