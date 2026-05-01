/*
 * XREFs of ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18020A46C
 * Callers:
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE@Z @ 0x1805100E0 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAW4CoreKeyboardViewType@Core@T.c)
 * Callees:
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1802DBE36 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1803CD018 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x1805100B8 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 */

char __fastcall TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
        TouchKeyboardExperienceManager *this,
        int a2,
        enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *a3)
{
  KBViewInfo **v6; // r10
  KBViewInfo **i; // r9
  unsigned int FirstViewType; // eax
  char v9; // bl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a3 = 11;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 424, &SRWLock);
  v6 = (KBViewInfo **)*((_QWORD *)this + 55);
  for ( i = (KBViewInfo **)*((_QWORD *)this + 54);
        i != v6 && (!KBViewInfo::IsValid(*i) || *((_DWORD *)*i + 26) != a2);
        i += 2 )
  {
    ;
  }
  if ( i == *((KBViewInfo ***)this + 55) || (FirstViewType = KBViewInfo::GetFirstViewType(*i), FirstViewType == -1) )
  {
    v9 = 0;
  }
  else
  {
    *(_DWORD *)a3 = FirstViewType;
    v9 = 1;
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v9;
}
