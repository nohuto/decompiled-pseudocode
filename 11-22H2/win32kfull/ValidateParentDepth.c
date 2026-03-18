/*
 * XREFs of ValidateParentDepth @ 0x1C00CEE6C
 * Callers:
 *     ValidateNewParent @ 0x1C00CEFDC (ValidateNewParent.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 */

__int64 __fastcall ValidateParentDepth(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  unsigned int v7; // edx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // eax

  v2 = a1;
  v3 = 1;
  v4 = 0LL;
  while ( a2 )
  {
    DesktopWindow = GetDesktopWindow(a2, a2);
    if ( v6 == DesktopWindow )
      break;
    a2 = *(_QWORD *)(v6 + 104);
    ++v3;
  }
  v7 = v3;
  if ( v2 && v2[14] != v4 )
  {
    v8 = v2;
    while ( 1 )
    {
      while ( v2[14] )
      {
        v2 = (_QWORD *)v2[14];
        ++v3;
      }
      v9 = (_QWORD *)v2[11];
      if ( !v9 )
        break;
LABEL_16:
      v2 = v9;
    }
    v10 = v3;
    if ( v3 <= v7 )
      v10 = v7;
    v7 = v10;
    while ( 1 )
    {
      v2 = (_QWORD *)v2[13];
      --v3;
      if ( v2 == v8 )
        break;
      v9 = (_QWORD *)v2[11];
      if ( v9 )
        goto LABEL_16;
    }
  }
  LOBYTE(v4) = v7 <= gNestedWindowLimit;
  return (unsigned int)v4;
}
