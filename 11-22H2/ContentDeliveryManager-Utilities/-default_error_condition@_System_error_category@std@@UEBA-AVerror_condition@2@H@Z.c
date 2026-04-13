/*
 * XREFs of ?default_error_condition@_System_error_category@std@@UEBA?AVerror_condition@2@H@Z @ 0x180043A10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Syserror_map@std@@YAPEBDH@Z @ 0x180004A20 (-_Syserror_map@std@@YAPEBDH@Z.c)
 */

__int64 __fastcall std::_System_error_category::default_error_condition(__int64 a1, __int64 a2, int a3)
{
  const char *v5; // rax
  bool v6; // zf
  void ***v7; // rax

  v5 = std::_Syserror_map(a3);
  *(_DWORD *)a2 = a3;
  v6 = v5 == 0LL;
  v7 = &std::_Error_objects<int>::_Generic_object;
  if ( v6 )
    v7 = std::_Error_objects<int>::_System_object;
  *(_QWORD *)(a2 + 8) = v7;
  return a2;
}
