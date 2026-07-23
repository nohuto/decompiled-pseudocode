/*
 * XREFs of sub_1407D7E94 @ 0x1407D7E94
 * Callers:
 *     sub_1407D7CA0 @ 0x1407D7CA0 (sub_1407D7CA0.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     sub_1409B2A10 @ 0x1409B2A10 (sub_1409B2A10.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035EB3C @ 0x14035EB3C (sub_14035EB3C.c)
 *     sub_14035EC68 @ 0x14035EC68 (sub_14035EC68.c)
 *     sub_14035ED74 @ 0x14035ED74 (sub_14035ED74.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1407E6274 @ 0x1407E6274 (sub_1407E6274.c)
 */

__int64 __fastcall sub_1407D7E94(__int64 BugCheckParameter1, __int64 a2, unsigned int a3, char a4)
{
  signed __int32 v7; // esi
  char v8; // al
  char v9; // di
  unsigned int v10; // eax
  unsigned int v11; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
  v7 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 8u);
  if ( (v7 & 8) != 0 )
  {
    v9 = a4 | 2;
  }
  else
  {
    if ( (xmmword_140D06900[0] & 1) != 0 )
      sub_14035ED74(BugCheckParameter1);
    sub_14035EC68(BugCheckParameter1, 0LL);
    v8 = a4 | 4;
    if ( (v7 & 0x40000000) == 0 )
      v8 = a4;
    v9 = v8;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1520) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 2004) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 2004) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter1 + 1080);
    sub_1402AFC00(BugCheckParameter1 + 1080);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 0x400) == 0 )
  {
    v10 = sub_1407E6274(BugCheckParameter1);
LABEL_14:
    v11 = v10;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_140C1BE20 + 1) && (v9 & 8) == 0 )
  {
    v10 = sub_14042A5E0(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v11 = 290;
  sub_140683990(BugCheckParameter1, 0);
LABEL_15:
  if ( (v7 & 8) == 0 )
    sub_14035EB3C(BugCheckParameter1);
  return v11;
}
