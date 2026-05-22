/*
 * XREFs of ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1801283D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1801263D4 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x180126B80 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 *     ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x18012727C (-AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z.c)
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x180127328 (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?Complete@AlpcMessage@@QEAAJPEAX@Z @ 0x180127454 (-Complete@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x180127960 (-DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ.c)
 *     ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x180127AB4 (-DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?DisconnectAllSections@SipcPort@@IEAAXXZ @ 0x180127C94 (-DisconnectAllSections@SipcPort@@IEAAXXZ.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x180127F14 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x180128038 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z.c)
 *     ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1801281A0 (-FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x18012835C (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?PopFront@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ @ 0x180128EBC (-PopFront@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ.c)
 *     ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x180128FE8 (-ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x180129170 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

__int64 __fastcall AlpcPort::GetNextPortEvent(AlpcPort *this, struct SipcPortEvent *a2)
{
  __int16 *v3; // r13
  char *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r14d
  signed int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  signed int v15; // r14d
  __int64 v16; // r14
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  struct SipcPort::SectionListEntry *SectionListEntry; // r15
  int v20; // r15d
  __int64 v21; // rax
  struct SipcPort::SectionListEntry *v22; // rax
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // eax
  __int64 result; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // ecx
  unsigned __int8 *v33; // rdx
  int v34; // eax
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int16 v39; // [rsp+78h] [rbp-88h]
  char v40; // [rsp+7Ah] [rbp-86h] BYREF
  __int128 v41; // [rsp+7Ch] [rbp-84h]
  char v42[68]; // [rsp+8Ch] [rbp-74h] BYREF
  char v43[72]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = (__int16 *)((char *)this + 88);
  v5 = (char *)this + 424;
  v6 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v36 = 332LL;
      v35 = 0LL;
      *(_OWORD *)v3 = 0LL;
      *((_OWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 42) = 0LL;
      v3[1] = 40;
      *((_DWORD *)v3 + 84) = 1610612736;
      v10 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 7), 0LL, 0LL, 0LL, v3, &v36, v5, &v35);
      if ( v10 )
      {
        *(_DWORD *)a2 = 0;
        if ( v10 == 258 || v10 == -1073741823 )
          return 1LL;
        v15 = v10 | 0x90000000;
        wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v15, v7, v8, v9);
        return (unsigned int)v15;
      }
      v11 = *((__int16 *)this + 46) & 0xFFFF00FF;
      if ( v11 <= 7 )
        break;
      v24 = v11 - 8;
      if ( !v24 )
        goto LABEL_29;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_29;
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 2 )
          goto LABEL_29;
      }
      else
      {
        v29 = *v3;
        if ( (v29 & 0x8000u) != 0LL )
          v29 = 0LL;
        if ( v29 == 164 )
        {
          v38 = 0LL;
          v39 = 0;
          v41 = 0LL;
          memset_0(v42, 0, sizeof(v42));
          memset_0(v43, 0, 0x44uLL);
          AlpcMessage::GetMessageData((AlpcMessage *)v3, 0xA4uLL, (char *)&v38);
          v32 = 0;
          v33 = (unsigned __int8 *)&v38 + 6;
          do
          {
            v34 = *v33++;
            v32 = v34 | (v32 << 8);
          }
          while ( v33 < (unsigned __int8 *)&v40 );
          *((_DWORD *)a2 + 2) = *((_DWORD *)this + 24);
          if ( !v32 )
            v32 = *((_DWORD *)this + 26);
          *((_DWORD *)a2 + 3) = v32;
          *(_DWORD *)a2 = 2;
          return 0LL;
        }
        AlpcPort::RejectClientConnection(this);
      }
    }
    if ( v11 == 7 )
      goto LABEL_29;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_29;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_29;
    v14 = v13 - 1;
    if ( v14 )
      break;
    if ( (*((_DWORD *)this + 107) & 0x40000000) != 0 )
    {
      v15 = AlpcMessage::Complete((AlpcMessage *)v3, *((void **)this + 7));
      if ( v15 < 0 || (v15 = AlpcPort::FillSectionListEntryPool(this, 1uLL), v15 < 0) )
      {
        AlpcMessage::DiscardAttributes((AlpcMessage *)v3, *((void **)this + 7));
        *(_DWORD *)a2 = 0;
        return (unsigned int)v15;
      }
      v16 = NtList<AlpcPort::AlpcSectionListEntry>::PopFront((char *)this + 64);
      *(_QWORD *)(v16 + 24) = *((_QWORD *)this + 56);
      *(_QWORD *)(v16 + 32) = *((_QWORD *)this + 57);
      *((_DWORD *)this + 107) &= ~0x40000000u;
      v17 = *(_QWORD *)(v16 + 32) - 40LL;
      *(_DWORD *)(v16 + 48) = *((_DWORD *)this + 24);
      v18 = (_QWORD *)(*(_QWORD *)(v16 + 24) + (v17 & 0xFFFFFFFFFFFFFFF8uLL));
      *(_DWORD *)(v16 + 52) = *((_DWORD *)this + 26);
      *(_QWORD *)(v16 + 40) = *v18;
      SectionListEntry = SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)(v18 + 1));
      if ( (!SectionListEntry || *((_DWORD *)SectionListEntry + 12) != GetCurrentProcessId())
        && *(_QWORD *)(v16 + 32) >= ((*(_QWORD *)(v16 + 40) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40
        && *(_DWORD *)(v16 + 48)
        && *(_DWORD *)(v16 + 52) )
      {
        if ( SectionListEntry )
        {
          if ( *((_BYTE *)SectionListEntry + 57) )
            SectionListEntry = 0LL;
          else
            *((_WORD *)SectionListEntry + 28) = 257;
        }
        if ( !*((_BYTE *)this + 496) )
          SipcPort::ProtectUnusedSectionMemory((struct SipcPort::SectionListEntry *)v16);
        SipcPort::AddSectionListEntry(this, v16);
        *((_QWORD *)a2 + 1) = *(_QWORD *)(v16 + 24);
        if ( SectionListEntry )
          v30 = *((_QWORD *)SectionListEntry + 3);
        else
          v30 = 0LL;
        *((_QWORD *)a2 + 2) = v30;
        *((_QWORD *)a2 + 3) = *(_QWORD *)(v16 + 40);
        LOBYTE(v6) = SectionListEntry != 0LL;
        *((_DWORD *)a2 + 8) = v6;
        *((_DWORD *)a2 + 9) = *(_DWORD *)(v16 + 48);
        v23 = *(_DWORD *)(v16 + 52);
        goto LABEL_46;
      }
      v20 = AlpcPort::AlpcSectionListEntry::DestroySection((AlpcPort::AlpcSectionListEntry *)v16);
      if ( v20 < 0 )
      {
        AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)v16, 1);
        result = (unsigned int)v20;
        *(_DWORD *)a2 = 0;
        return result;
      }
      AlpcPort::AlpcSectionListEntry::FreeSectionEntry((AlpcPort::AlpcSectionListEntry *)v16);
    }
    else
    {
      if ( (*((_WORD *)this + 46) & 0x2000) != 0 )
        AlpcMessage::Cancel((AlpcMessage *)v3, *((void **)this + 7));
      v21 = *v3;
      if ( *v3 < 0 )
        v21 = 0LL;
      if ( v21 == 32 )
      {
        memset(v37, 0, sizeof(v37));
        AlpcMessage::GetMessageData((AlpcMessage *)v3, 0x20uLL, (char *)v37);
        v22 = SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)v37);
        if ( v22 )
        {
          *((_WORD *)v22 + 28) = 257;
          *((_QWORD *)a2 + 1) = *((_QWORD *)v22 + 3);
          *((_QWORD *)a2 + 2) = 0LL;
          *((_QWORD *)a2 + 3) = *((_QWORD *)v22 + 5);
          *((_DWORD *)a2 + 8) = 2;
          *((_DWORD *)a2 + 9) = *((_DWORD *)v22 + 12);
          v23 = *((_DWORD *)v22 + 13);
LABEL_46:
          *((_DWORD *)a2 + 10) = v23;
          *(_DWORD *)a2 = 6;
          return 0LL;
        }
      }
    }
  }
  if ( (unsigned int)(v14 - 1) <= 1 )
  {
    SipcPort::DisconnectAllSections(this, v7);
    if ( (*((_DWORD *)this + 107) & 0x20000000) != 0 )
    {
      v31 = *((_QWORD *)this + 58);
      if ( v31 == *((_QWORD *)this + 7) )
        v31 = 0LL;
      v6 = v31;
    }
    *((_QWORD *)a2 + 1) = v6;
    *(_DWORD *)a2 = 3;
    return 0LL;
  }
LABEL_29:
  if ( (*((_WORD *)this + 46) & 0x2000) != 0 )
    AlpcMessage::Cancel((AlpcMessage *)v3, *((void **)this + 7));
  v27 = *((__int16 *)this + 46) & 0xFFFF00FF;
  *(_DWORD *)a2 = 1;
  *((_DWORD *)a2 + 2) = v27;
  return 2147549183LL;
}
