/*
 * XREFs of ??_G?$basic_ostream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x180067AF4
 * Callers:
 *     ??_E?$basic_ostream@_WU?$char_traits@_W@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x1800679A0 (--_E-$basic_ostream@_WU-$char_traits@_W@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800058DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

char *__fastcall std::wostream::`scalar deleting destructor'(struct std::ios_base *a1, char a2)
{
  char *v3; // rdi
  __int64 v4; // r8

  v3 = (char *)a1 - 16;
  *(_QWORD *)((char *)a1 + *(int *)(*((_QWORD *)a1 - 2) + 4LL) - 16) = &std::basic_ostream<unsigned short>::`vftable';
  v4 = *(int *)(*((_QWORD *)a1 - 2) + 4LL);
  *(_DWORD *)((char *)a1 + v4 - 20) = v4 - 16;
  *(_QWORD *)a1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
