/*
 * XREFs of GreGetRgnBox @ 0x1C0092B40
 * Callers:
 *     NtGdiGetRgnBox @ 0x1C0092AF0 (NtGdiGetRgnBox.c)
 *     EngGetRgnBox @ 0x1C0177B40 (EngGetRgnBox.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a1, 1, 0);
  if ( a2 )
  {
    v4 = v6[0];
    if ( v6[0] )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v6[0] + 96LL);
      if ( *(_DWORD *)(v4 + 84) == 1 )
      {
        *(_DWORD *)a2 = 0;
        v3 = 1;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 12) = 0;
      }
      else
      {
        LOBYTE(v3) = *(_DWORD *)(v4 + 80) > 0x38u;
        v3 += 2;
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  return v3;
}
