/*
 * XREFs of _anonymous_namespace_::ApplyKeyStateToQueue @ 0x1C009C694
 * Callers:
 *     _anonymous_namespace_::UpdateKeyState @ 0x1C009C5FC (_anonymous_namespace_--UpdateKeyState.c)
 * Callees:
 *     <none>
 */

int __fastcall anonymous_namespace_::ApplyKeyStateToQueue(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int64 v5; // r10
  int v6; // r11d
  int v7; // r8d
  unsigned int v8; // eax
  int v9; // r8d
  unsigned __int64 v10; // rcx
  char v11; // r8
  int v12; // eax
  int result; // eax

  if ( a3 )
  {
    v5 = (unsigned __int64)a2 >> 2;
    v6 = a2 & 3;
    v7 = *(unsigned __int8 *)(v5 + a1 + 228);
    if ( !_bittest(&v7, (unsigned __int8)(2 * v6)) )
    {
      v8 = 2 * v6 + 1;
      if ( _bittest(&v7, v8) )
        v9 = v7 & ~(1 << v8);
      else
        v9 = v7 | (1 << v8);
      *(_BYTE *)(v5 + a1 + 228) = v9;
    }
  }
  v10 = (unsigned __int64)a2 >> 2;
  v11 = 2 * (a2 & 3);
  v12 = *(unsigned __int8 *)(v10 + a1 + 228);
  if ( a3 )
    result = v12 | (1 << v11);
  else
    result = v12 & ~(1 << v11);
  *(_BYTE *)(v10 + a1 + 228) = result;
  if ( a2 < 0x20u )
  {
    result = (int)gpsi;
    ++*((_DWORD *)gpsi + 1746);
  }
  return result;
}
