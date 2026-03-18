/*
 * XREFs of ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C0285BBC
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C0010120 (UmfdLoadFontFileView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FNTCacheValidateFntFileInfo(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    do
    {
      v6 = (_QWORD *)*a1;
      v10 = 0LL;
      v11 = 0LL;
      if ( !(unsigned int)Win32FileInfo(v6[10], &v11, &v10) )
        return 2;
      v7 = (_QWORD *)*a1;
      if ( *(_QWORD *)*a1 != v11 || *((_DWORD *)v7 + 6) != (_DWORD)v10 )
        v2 = 1;
      *v7 = v11;
      ++v3;
      v8 = *a1++;
      *(_DWORD *)(v8 + 24) = v10;
    }
    while ( v3 < a2 );
    if ( v2 == 1 && qword_1C0335DA8 )
      *(_DWORD *)(qword_1C0335DA8 + 16) |= v2 + 1;
  }
  return v2;
}
