/*
 * XREFs of sub_140A67BA0 @ 0x140A67BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140563058 @ 0x140563058 (sub_140563058.c)
 *     sub_1405633A8 @ 0x1405633A8 (sub_1405633A8.c)
 *     sub_140A692FC @ 0x140A692FC (sub_140A692FC.c)
 */

__int64 __fastcall sub_140A67BA0(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      v2 = sub_1405633A8(a1, a2);
      if ( v2 >= 0 )
      {
        sub_140A692FC();
        return 1073742484;
      }
      else
      {
        sub_14042A5E0(3LL, *(_QWORD *)(qword_140C448A8 + 33160));
        sub_140A692FC();
      }
    }
  }
  else
  {
    *(_BYTE *)(qword_140C448A8 + 208) = 1;
    return (unsigned int)sub_140563058();
  }
  return (unsigned int)v2;
}
