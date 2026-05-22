/*
 * XREFs of ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800FE6C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18007C7B4 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800FCF20 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 *     ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x1800FD61C (-AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z.c)
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800FD6D8 (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800FDCA0 (-DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ.c)
 *     ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x1800FDDF4 (-DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?DisconnectAllSections@SipcPort@@IEAAXXZ @ 0x1800FDFC8 (-DisconnectAllSections@SipcPort@@IEAAXXZ.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800FE20C (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800FE330 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z.c)
 *     ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1800FE490 (-FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x1800FE640 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?PopFront@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ @ 0x1800FF174 (-PopFront@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ.c)
 *     ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x1800FF298 (-ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800FF420 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

__int64 __fastcall AlpcPort::GetNextPortEvent(AlpcPort *this, struct SipcPortEvent *a2)
{
  __int16 *v2; // r13
  _QWORD *v4; // r12
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r14d
  __int16 v12; // cx
  signed int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r14d
  __int64 v19; // r14
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  struct SipcPort::SectionListEntry *SectionListEntry; // r15
  int v23; // r15d
  __int64 v24; // rax
  bool v25; // zf
  struct SipcPort::SectionListEntry *v26; // rax
  int v27; // ecx
  unsigned __int8 *v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v36[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int16 v38; // [rsp+80h] [rbp-80h]
  char v39; // [rsp+82h] [rbp-7Eh] BYREF
  __int128 v40; // [rsp+84h] [rbp-7Ch]
  _BYTE v41[68]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v42[72]; // [rsp+D8h] [rbp-28h] BYREF

  v2 = (__int16 *)((char *)this + 88);
  v4 = (_QWORD *)((char *)this + 424);
  v6 = (char *)this + 424;
  v7 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v34 = 332LL;
      v33 = 0LL;
      *(_OWORD *)v2 = 0LL;
      *((_OWORD *)v2 + 1) = 0LL;
      *((_QWORD *)v2 + 4) = 0LL;
      *v4 = 0LL;
      v2[1] = 40;
      *(_DWORD *)v4 = 1610612736;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int16 *, __int64 *, char *, __int64 *))NtAlpcSendWaitReceivePort)(
              *((_QWORD *)this + 7),
              0LL,
              0LL,
              0LL,
              v2,
              &v34,
              v6,
              &v33);
      if ( v11 )
      {
        *(_DWORD *)a2 = 0;
        if ( v11 == 258 || v11 == -1073741823 )
          return 1LL;
        v18 = v11 | 0x90000000;
        wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v18, v8, v9, v10);
        return (unsigned int)v18;
      }
      v12 = *((_WORD *)this + 46);
      v13 = v12 & 0xFFFF00FF;
      if ( v13 != 3 )
        break;
      if ( (*((_DWORD *)this + 107) & 0x40000000) != 0 )
      {
        v16 = *((_QWORD *)this + 7);
        v2[2] &= ~0x2000u;
        v35 = 0LL;
        v17 = ((__int64 (__fastcall *)(__int64, _QWORD, __int16 *, _QWORD *, _QWORD, _QWORD, _QWORD, __int64 *, __int64, __int64))NtAlpcSendWaitReceivePort)(
                v16,
                0LL,
                v2,
                v4,
                0LL,
                0LL,
                0LL,
                &v35,
                v33,
                v34);
        if ( v17 < 0 && (v18 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v17), v18 < 0)
          || (v18 = AlpcPort::FillSectionListEntryPool(this, 1uLL), v18 < 0) )
        {
          AlpcMessage::DiscardAttributes((AlpcMessage *)v2, *((void **)this + 7));
          *(_DWORD *)a2 = 0;
          return (unsigned int)v18;
        }
        v19 = NtList<AlpcPort::AlpcSectionListEntry>::PopFront((char *)this + 64);
        *(_QWORD *)(v19 + 24) = *((_QWORD *)this + 56);
        *(_QWORD *)(v19 + 32) = *((_QWORD *)this + 57);
        *((_DWORD *)this + 107) &= ~0x40000000u;
        v20 = *(_QWORD *)(v19 + 32) - 40LL;
        *(_DWORD *)(v19 + 48) = *((_DWORD *)this + 24);
        v21 = (_QWORD *)(*(_QWORD *)(v19 + 24) + (v20 & 0xFFFFFFFFFFFFFFF8uLL));
        *(_DWORD *)(v19 + 52) = *((_DWORD *)this + 26);
        *(_QWORD *)(v19 + 40) = *v21;
        SectionListEntry = SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)(v21 + 1));
        if ( (!SectionListEntry || *((_DWORD *)SectionListEntry + 12) != GetCurrentProcessId())
          && *(_QWORD *)(v19 + 32) >= ((*(_QWORD *)(v19 + 40) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40
          && *(_DWORD *)(v19 + 48)
          && *(_DWORD *)(v19 + 52) )
        {
          if ( SectionListEntry )
          {
            if ( *((_BYTE *)SectionListEntry + 57) )
              SectionListEntry = 0LL;
            else
              *((_WORD *)SectionListEntry + 28) = 257;
          }
          if ( !*((_BYTE *)this + 496) )
            SipcPort::ProtectUnusedSectionMemory((struct SipcPort::SectionListEntry *)v19);
          SipcPort::AddSectionListEntry(this, (struct SipcPort::SectionListEntry *)v19);
          *((_QWORD *)a2 + 1) = *(_QWORD *)(v19 + 24);
          if ( SectionListEntry )
            v31 = *((_QWORD *)SectionListEntry + 3);
          else
            v31 = 0LL;
          *((_QWORD *)a2 + 2) = v31;
          *((_QWORD *)a2 + 3) = *(_QWORD *)(v19 + 40);
          LOBYTE(v7) = SectionListEntry != 0LL;
          *((_DWORD *)a2 + 8) = v7;
          *((_DWORD *)a2 + 9) = *(_DWORD *)(v19 + 48);
          v32 = *(_DWORD *)(v19 + 52);
          goto LABEL_57;
        }
        v23 = AlpcPort::AlpcSectionListEntry::DestroySection((AlpcPort::AlpcSectionListEntry *)v19);
        if ( v23 < 0 )
        {
          AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)v19, 1);
          result = (unsigned int)v23;
          *(_DWORD *)a2 = 0;
          return result;
        }
        AlpcPort::AlpcSectionListEntry::FreeSectionEntry((AlpcPort::AlpcSectionListEntry *)v19);
        v6 = (char *)this + 424;
      }
      else
      {
        if ( (v12 & 0x2000) != 0 )
          AlpcMessage::Cancel((AlpcMessage *)v2, *((void **)this + 7));
        v24 = *v2;
        if ( *v2 < 0 )
          v24 = 0LL;
        v25 = v24 == 32;
        v6 = (char *)this + 424;
        if ( v25 )
        {
          memset(v36, 0, sizeof(v36));
          AlpcMessage::GetMessageData((AlpcMessage *)v2, 0x20uLL, (char *)v36);
          v26 = SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)v36);
          if ( !v26 )
            goto LABEL_32;
          *((_WORD *)v26 + 28) = 257;
          *((_QWORD *)a2 + 1) = *((_QWORD *)v26 + 3);
          *((_QWORD *)a2 + 2) = 0LL;
          *((_QWORD *)a2 + 3) = *((_QWORD *)v26 + 5);
          *((_DWORD *)a2 + 8) = 2;
          *((_DWORD *)a2 + 9) = *((_DWORD *)v26 + 12);
          v32 = *((_DWORD *)v26 + 13);
LABEL_57:
          *(_DWORD *)a2 = 6;
          *((_DWORD *)a2 + 10) = v32;
          return 0LL;
        }
      }
    }
    if ( v13 <= 3 )
      goto LABEL_8;
    if ( v13 <= 5 )
      break;
    if ( v13 == 10 )
    {
      v15 = *v2;
      if ( (v15 & 0x8000u) != 0LL )
        v15 = 0LL;
      if ( v15 == 164 )
      {
        v37 = 0LL;
        v38 = 0;
        v40 = 0LL;
        memset_0(v41, 0, sizeof(v41));
        memset_0(v42, 0, 0x44uLL);
        AlpcMessage::GetMessageData((AlpcMessage *)v2, 0xA4uLL, (char *)&v37);
        v27 = 0;
        v28 = (unsigned __int8 *)&v37 + 6;
        do
        {
          v29 = *v28++;
          v27 = v29 | (v27 << 8);
        }
        while ( v28 < (unsigned __int8 *)&v39 );
        *((_DWORD *)a2 + 2) = *((_DWORD *)this + 24);
        if ( !v27 )
          v27 = *((_DWORD *)this + 26);
        *((_DWORD *)a2 + 3) = v27;
        *(_DWORD *)a2 = 2;
        return 0LL;
      }
      AlpcPort::RejectClientConnection(this);
    }
    else if ( v13 != 12 )
    {
LABEL_8:
      if ( (v12 & 0x2000) != 0 )
      {
        AlpcMessage::Cancel((AlpcMessage *)v2, *((void **)this + 7));
        v12 = *((_WORD *)this + 46);
      }
      *(_DWORD *)a2 = 1;
      *((_DWORD *)a2 + 2) = v12 & 0xFFFF00FF;
      return 2147549183LL;
    }
LABEL_32:
    v6 = (char *)this + 424;
  }
  SipcPort::DisconnectAllSections(this);
  if ( (*((_DWORD *)this + 107) & 0x20000000) != 0 )
  {
    v30 = *((_QWORD *)this + 58);
    if ( v30 == *((_QWORD *)this + 7) )
      v30 = 0LL;
    v7 = v30;
  }
  *((_QWORD *)a2 + 1) = v7;
  *(_DWORD *)a2 = 3;
  return 0LL;
}
