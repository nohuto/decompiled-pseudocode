/*
 * XREFs of sub_1409D43FC @ 0x1409D43FC
 * Callers:
 *     sub_1407FA644 @ 0x1407FA644 (sub_1407FA644.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_140376B48 @ 0x140376B48 (sub_140376B48.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409D43FC(__int64 a1, _OWORD *a2, int a3, _DWORD *a4, KPROCESSOR_MODE PreviousMode)
{
  struct _MDL *v7; // r14
  _PRIVILEGE_SET *v8; // rsi
  int v9; // r12d
  int v10; // ebx
  unsigned __int8 v11; // r15^1
  unsigned int v12; // eax
  _OWORD *v13; // rax
  ULONG PrivilegeCount; // eax
  PVOID Base[2]; // [rsp+40h] [rbp-68h]
  __int128 v17; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Object[3]; // [rsp+60h] [rbp-48h] BYREF

  memset(Object, 0, 24);
  v17 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  KeInitializeEvent(Object, NotificationEvent, 0);
  if ( a3 == 16 )
  {
    if ( PreviousMode && ((unsigned __int8)a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)Base = *a2;
    v11 = BYTE1(*a2);
    if ( LOBYTE(Base[0]) == 2 && v11 < 4u )
    {
      if ( v11 <= 1u || SeSinglePrivilegeCheck(stru_140D3CA90, PreviousMode) )
      {
        if ( (!HIDWORD(Base[0])
           || (v12 = MmSizeOfMdl(Base[1], HIDWORD(Base[0])), (v7 = (struct _MDL *)sub_140260C2C(v12, 0x444D6D73u)) != 0LL))
          && (v13 = sub_140260C2C(0x28uLL, 0x69576D73u), (v8 = (_PRIVILEGE_SET *)v13) != 0LL) )
        {
          *v13 = 0LL;
          v13[1] = 0LL;
          *((_QWORD *)v13 + 4) = 0LL;
          PrivilegeCount = 0;
          if ( HIDWORD(Base[0]) )
          {
            v7->Next = 0LL;
            v7->Size = 8 * (((((__int64)Base[1] & 0xFFF) + (unsigned __int64)HIDWORD(Base[0]) + 4095) >> 12) + 6);
            v7->MdlFlags = 0;
            v7->StartVa = (PVOID)((unsigned __int64)Base[1] & 0xFFFFFFFFFFFFF000uLL);
            v7->ByteOffset = (__int64)Base[1] & 0xFFF;
            v7->ByteCount = HIDWORD(Base[0]);
            v9 = 1;
            MmProbeAndLockPages(v7, PreviousMode, IoWriteAccess);
            PrivilegeCount = v8->PrivilegeCount;
          }
          v8->PrivilegeCount = PrivilegeCount & 0xFFFFFFF8 | 3;
          v8->Privilege[0].Luid.LowPart = v11;
          v8->Privilege[0].Luid.HighPart = HIDWORD(Base[0]);
          *(_QWORD *)&v8->Privilege[0].Attributes = v7;
          v10 = sub_140376B48((__int64)&unk_140D31A00, HIWORD(LODWORD(Base[0])), (int)v8, (int)Object, (__int64)&v17);
          if ( v10 >= 0 )
          {
            v8 = 0LL;
            KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
            v10 = v17;
            *a4 = DWORD2(v17);
          }
        }
        else
        {
          v10 = -1073741670;
        }
      }
      else
      {
        v10 = -1073741790;
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741306;
  }
  if ( v8 )
    SeFreePrivileges(v8);
  if ( v9 )
    MmUnlockPages(v7);
  if ( v7 )
    SeFreePrivileges((PPRIVILEGE_SET)v7);
  return (unsigned int)v10;
}
