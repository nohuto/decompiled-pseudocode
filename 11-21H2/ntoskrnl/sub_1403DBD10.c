/*
 * XREFs of sub_1403DBD10 @ 0x1403DBD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DBD10(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v3; // r9

  v3 = 0x470FEAA4E1233993LL - *a1;
  if ( *a1 == 0x470FEAA4E1233993LL )
    v3 = 0x71FBB6C151A3E79DLL - a1[1];
  if ( !v3 && a3 == 4 && a2 )
    byte_140C529C1 = *a2 != 0;
  return 0LL;
}
