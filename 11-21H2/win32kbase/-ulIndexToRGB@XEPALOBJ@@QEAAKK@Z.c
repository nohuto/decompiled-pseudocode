/*
 * XREFs of ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C007F700
 * Callers:
 *     ulIndexToRGB @ 0x1C007F6B0 (ulIndexToRGB.c)
 * Callees:
 *     ?ulBitfieldToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C00CDA0C (-ulBitfieldToRGB@XEPALOBJ@@QEAAKK@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulIndexToRGB(XEPALOBJ *this, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  int v4; // eax
  int v6; // [rsp+38h] [rbp+10h]

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( v3 )
  {
    if ( v3 <= a2 )
      return 0;
    else
      return *(_DWORD *)(*(_QWORD *)(v2 + 112) + 4LL * a2) & 0xFFFFFF;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 24);
    if ( (v4 & 2) != 0 )
    {
      return XEPALOBJ::ulBitfieldToRGB(this, a2);
    }
    else if ( (v4 & 8) != 0 )
    {
      HIWORD(v6) = (unsigned __int8)a2;
      LOBYTE(v6) = BYTE2(a2);
      BYTE1(v6) = BYTE1(a2);
      return v6;
    }
    else
    {
      return a2 & 0xFFFFFF;
    }
  }
}
