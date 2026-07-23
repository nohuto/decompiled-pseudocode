/*
 * XREFs of ComputeNameLength @ 0x1800F0DD0
 * Callers:
 *     PfxFindPrefix @ 0x1800F0E80 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800F0F80 (PfxInsertPrefix.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 */

__int64 ComputeNameLength()
{
  bool v0; // dl
  unsigned __int16 *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r10
  unsigned int v4; // ecx
  bool v5; // zf
  unsigned int v6; // edx
  unsigned int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // eax
  _BYTE *v12; // rax
  __int64 v13; // r8
  unsigned int v14; // ecx
  signed __int32 v16[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v16, 0);
    v3 = qword_1801776E0;
    v0 = GlobalRtlNlsState.DBCSCodePage != 0;
  }
  v4 = *v1 - 1;
  v5 = !v0;
  v6 = 1;
  if ( v5 )
  {
    if ( v4 )
    {
      v12 = *(_BYTE **)(v2 + 8);
      v13 = v4;
      do
      {
        v14 = v6 + 1;
        if ( *v12 != 92 )
          v14 = v6;
        ++v12;
        v6 = v14;
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    v7 = 0;
    if ( v4 )
    {
      v8 = *(_QWORD *)(v2 + 8);
      do
      {
        v9 = *(unsigned __int8 *)(v7 + v8);
        if ( *(_WORD *)(v3 + 2 * v9) )
        {
          v10 = 2;
        }
        else
        {
          v11 = v6 + 1;
          if ( (_BYTE)v9 != 92 )
            v11 = v6;
          v6 = v11;
          v10 = 1;
        }
        v7 += v10;
      }
      while ( v7 < v4 );
    }
  }
  return v6;
}
