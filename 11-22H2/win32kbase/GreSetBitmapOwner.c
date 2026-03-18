/*
 * XREFs of GreSetBitmapOwner @ 0x1C003AA60
 * Callers:
 *     <none>
 * Callees:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00444D0 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C40 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // r9
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+38h] [rbp-40h]
  _BYTE v19[32]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+68h] [rbp-10h]

  v4 = 0;
  SURFREF::SURFREF((SURFREF *)v19);
  v17 = 0LL;
  v18 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v18 )
  {
    v8 = (_DWORD *)v17;
    if ( *(_BYTE *)(v17 + 14) == 5 && *(_WORD *)(v17 + 12) == WORD1(a1) )
    {
      v9 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 8008LL);
      v10 = GdiHandleManager::DecodeIndex(v9, *v8 & 0xFFFFFF);
      v11 = *((_QWORD *)v9 + 2);
      v12 = v10;
      v13 = *(_DWORD *)(v11 + 2056);
      if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
        goto LABEL_23;
      if ( v10 >= v13 )
        v14 = ((v10 - v13) >> 16) + 1;
      else
        v14 = 0;
      v15 = *(_QWORD *)(v11 + 8LL * v14 + 8);
      if ( v14 )
        v12 = ((1 - v14) << 16) - v13 + v10;
      if ( (unsigned int)v12 >= *(_DWORD *)(v15 + 20) )
LABEL_23:
        v5 = 0LL;
      else
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
      ++*(_DWORD *)(v5 + 8);
      TrackHmgrReferenceIncrement(5u, (struct OBJECT *)v5);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
    if ( v18 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  }
  v20 = v5;
  if ( v5 && (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 192) || a2) && (a1 & 0x800000) == 0 )
  {
    LOBYTE(v7) = 5;
    v4 = HmgSetOwner(a1, a2, v7);
  }
  SURFREF::~SURFREF((SURFREF *)v19);
  return v4;
}
