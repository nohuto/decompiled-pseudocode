/*
 * XREFs of ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C01017B8
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C000FAC4 (EngMapFontFileFDInternal.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0011304 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C0286184 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMapRoutine(__int64 *a1, __int64 *a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // r11
  int v8; // r9d
  unsigned int v9; // r8d
  int v10; // ecx
  int v11; // eax
  int v12; // r9d
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rcx

  v6 = *a1;
  if ( v6 )
  {
    if ( *((_DWORD *)a1 + 6) != *((_DWORD *)a2 + 6) )
      goto LABEL_14;
    v7 = *a2;
    if ( v6 != *a2 )
    {
      if ( !a4 )
        goto LABEL_13;
      v14 = v7 - v6;
      v15 = v6 - v7;
      if ( v14 >= 0 )
        v15 = v14;
      if ( v15 != 36000000000LL )
      {
LABEL_13:
        if ( !gbGUISetup )
          goto LABEL_14;
      }
    }
  }
  v8 = *((_DWORD *)a1 + 10);
  if ( (v8 & 0x10) == 0 || (a2[5] & 0x10) != 0 )
  {
    v9 = 1;
    if ( a3 == 1 )
      a1[2] = a2[2];
    else
      a1[1] = a2[1];
    *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
    *a1 = *a2;
    a1[4] = a2[4];
    a1[6] = a2[6];
    v10 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)*((_DWORD *)a2 + 10)) & 4 | 1;
    *((_DWORD *)a1 + 10) = v10;
    v11 = v10 ^ (*((_DWORD *)a2 + 10) ^ v10) & 8;
    *((_DWORD *)a1 + 10) = v11;
    v12 = v11 ^ (*((_DWORD *)a2 + 10) ^ v11) & 0x10;
    *((_DWORD *)a1 + 10) = v12;
    a1[9] = a2[9];
  }
  else
  {
LABEL_14:
    if ( a3 == 1 )
    {
      --*((_DWORD *)a1 + 25);
      a1[2] = 0LL;
    }
    else
    {
      --*((_DWORD *)a1 + 24);
      a1[1] = 0LL;
    }
    *((_DWORD *)a1 + 10) &= ~1u;
    v12 = *((_DWORD *)a1 + 10);
    v9 = 0;
  }
  result = v9;
  *((_DWORD *)a1 + 10) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)*((_DWORD *)a2 + 10)) & 2;
  a1[7] = a2[7];
  return result;
}
