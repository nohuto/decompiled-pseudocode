/*
 * XREFs of sub_180005140 @ 0x180005140
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005018 @ 0x180005018 (sub_180005018.c)
 *     sub_180005090 @ 0x180005090 (sub_180005090.c)
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     sub_18000BAB0 @ 0x18000BAB0 (sub_18000BAB0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_180019178 @ 0x180019178 (sub_180019178.c)
 *     sub_1800191B0 @ 0x1800191B0 (sub_1800191B0.c)
 */

__int64 __fastcall sub_180005140(__int64 a1, __int64 *a2)
{
  int InformationProcess; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  int v7; // edi
  __int64 v8; // rsi
  signed int v9; // ebx
  NTSTATUS v10; // eax
  signed int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  NTSTATUS v14; // eax
  signed int v15; // eax
  __int64 v16; // rbx
  bool v17; // zf
  __int64 v18; // rsi
  signed int v19; // eax
  __int64 v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD *v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-98h] BYREF
  __int128 v34; // [rsp+80h] [rbp-88h]
  char v35[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+A8h] [rbp-60h]
  _OWORD ProcessInformation[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-38h]
  char v40[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-28h]
  char SystemInformation[8]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v43; // [rsp+100h] [rbp-8h]

  v27 = 0LL;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess >= 0 )
  {
    RtlAcquireSRWLockExclusive(&unk_180032C38);
    if ( !qword_180032C78 )
    {
      v4 = sub_18000BAB0(0x70uLL);
      if ( v4 && (v5 = sub_180005018(v4)) != 0 )
      {
        v6 = sub_180005FC0(&unk_1800206F0);
        v7 = v6 | 0x10000000;
        if ( v6 >= 0 )
        {
          v7 = sub_180005090(v5);
          if ( v7 >= 0 )
          {
            if ( qword_180032C78 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180032C78 + 16LL))(qword_180032C78);
            qword_180032C78 = v5;
            goto LABEL_10;
          }
        }
        RtlReleaseSRWLockExclusive(&unk_180032C38);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        if ( v7 >= 0 )
        {
LABEL_12:
          v8 = qword_180032C78;
          RtlAcquireSRWLockExclusive(qword_180032C78 + 96);
          *(_DWORD *)(v8 + 104) = GetCurrentThreadId();
          v9 = sub_1800056F0(v8);
          if ( v9 >= 0 )
          {
            v29 = 24;
            v10 = NtQueryWnfStateData(v8 + 48, 0LL, 0LL, &v32, v40, &v29);
            if ( v10 >= 0 )
            {
              v12 = v41;
              *(_DWORD *)(v8 + 104) = 0;
              RtlReleaseSRWLockExclusive(v8 + 96);
              goto LABEL_18;
            }
            v11 = RtlNtStatusToDosError(v10);
            v9 = v11;
            if ( v11 > 0 )
              v9 = (unsigned __int16)v11 | 0x80070000;
          }
          *(_DWORD *)(v8 + 104) = 0;
          RtlReleaseSRWLockExclusive(v8 + 96);
          if ( v9 < 0 )
            goto LABEL_48;
          v12 = v27;
LABEL_18:
          v13 = qword_180032C78;
          RtlAcquireSRWLockExclusive(qword_180032C78 + 96);
          *(_DWORD *)(v13 + 104) = GetCurrentThreadId();
          v9 = sub_1800056F0(v13);
          if ( v9 >= 0 )
          {
            v30 = 24;
            v14 = NtQueryWnfStateData(v13 + 48, 0LL, 0LL, &v31, v35, &v30);
            if ( v14 >= 0 )
            {
              v16 = v37;
              v17 = v37 == 0;
              *(_DWORD *)(v13 + 104) = 0;
              if ( v17 )
                v16 = v36;
              RtlReleaseSRWLockExclusive(v13 + 96);
              goto LABEL_30;
            }
            v15 = RtlNtStatusToDosError(v14);
            v9 = v15;
            if ( v15 > 0 )
              v9 = (unsigned __int16)v15 | 0x80070000;
          }
          *(_DWORD *)(v13 + 104) = 0;
          RtlReleaseSRWLockExclusive(v13 + 96);
          if ( v9 < 0 )
            goto LABEL_48;
          v16 = v27;
LABEL_30:
          if ( ((v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
          {
            NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
            v18 = v43;
            InformationProcess = NtQuerySystemInformation(
                                   MaxSystemInfoClass|SystemFullMemoryInformation,
                                   &v33,
                                   0x20u,
                                   (PULONG)&v28);
            if ( InformationProcess < 0 )
              goto LABEL_32;
            v12 = v18 * v34;
          }
          v33 = ProcessInformation[0];
          v34 = ProcessInformation[1];
          goto LABEL_38;
        }
      }
      else
      {
        RtlReleaseSRWLockExclusive(&unk_180032C38);
      }
      v12 = v39;
      v16 = v39;
      goto LABEL_30;
    }
LABEL_10:
    RtlReleaseSRWLockExclusive(&unk_180032C38);
    goto LABEL_12;
  }
LABEL_32:
  v19 = RtlNtStatusToDosError(InformationProcess);
  v9 = v19;
  if ( v19 > 0 )
    v9 = (unsigned __int16)v19 | 0x80070000;
  if ( v9 >= 0 )
  {
    v16 = v27;
    v12 = v27;
LABEL_38:
    v20 = *((_QWORD *)&v33 + 1);
    v21 = *((_QWORD *)&v33 + 1) + v33;
    if ( v27 )
      (*(void (**)(void))(*(_QWORD *)v27 + 16LL))();
    v27 = 0LL;
    v22 = operator new(0x58uLL, (const struct std::nothrow_t *)&unk_180026378);
    v28 = v22;
    v23 = v22;
    if ( v22 )
    {
      v24 = qword_1800328E0;
      v22[5] = 1LL;
      *v22 = off_180020DD0;
      v22[1] = off_180020E28;
      v22[2] = off_180020EA0;
      v22[3] = off_180020E70;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      v23[6] = 0LL;
      *v23 = off_180020A98;
      v23[1] = off_180020A10;
      v23[2] = off_180020A60;
      v23[3] = off_180020A30;
      v23[7] = 0LL;
      v23[8] = 0LL;
      v23[9] = 0LL;
      v31 = v23;
      v28 = 0LL;
      v9 = sub_180009E80((int)v23, v20, v34, v21, v12, v16);
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64 *))*v23)(v23, &unk_180026668, &v27);
        (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
        if ( v9 >= 0 )
        {
          *a2 = v27;
          v27 = 0LL;
        }
      }
      else
      {
        sub_180019178(&v31);
        sub_1800191B0(&v28);
      }
    }
    else
    {
      sub_1800191B0(&v28);
      v9 = -2147024882;
    }
  }
LABEL_48:
  v25 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)v9;
}
