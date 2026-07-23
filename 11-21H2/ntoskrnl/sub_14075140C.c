/*
 * XREFs of sub_14075140C @ 0x14075140C
 * Callers:
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 *     sub_1403C0FF4 @ 0x1403C0FF4 (sub_1403C0FF4.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_1407EDCAC @ 0x1407EDCAC (sub_1407EDCAC.c)
 *     sub_1407EF430 @ 0x1407EF430 (sub_1407EF430.c)
 *     sub_1407FD344 @ 0x1407FD344 (sub_1407FD344.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D5E5C @ 0x1402D5E5C (sub_1402D5E5C.c)
 *     sub_1402D5EE4 @ 0x1402D5EE4 (sub_1402D5EE4.c)
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140751840 @ 0x140751840 (sub_140751840.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 *     sub_140751908 @ 0x140751908 (sub_140751908.c)
 *     sub_14075197C @ 0x14075197C (sub_14075197C.c)
 *     sub_1407519BC @ 0x1407519BC (sub_1407519BC.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14075140C(LPCGUID SettingGuid, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  size_t v5; // r13
  bool v6; // bp
  LPCGUID v8; // r12
  _DWORD *v9; // r14
  void *v10; // r15
  __int64 v11; // rbx
  _DWORD *v12; // rsi
  unsigned int v13; // edi
  char v14; // si
  __int64 v16; // rax
  _QWORD *v17; // r15
  char v18; // r12
  __int64 i; // rbp
  bool v20; // zf
  _DWORD *v21; // rax
  signed __int32 v22; // eax
  _QWORD *j; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rcx
  __int64 *v29; // r10
  __int64 v30; // rdx
  __int64 **v31; // rax
  __int64 **v32; // rdx
  __int64 *v33; // rdx
  __int64 *v34; // rax
  char v35; // [rsp+40h] [rbp-68h]
  char v36; // [rsp+41h] [rbp-67h]
  char v37; // [rsp+42h] [rbp-66h]
  void *Pool2; // [rsp+50h] [rbp-58h]
  __int64 v39; // [rsp+60h] [rbp-48h]

  v5 = a4;
  v6 = 0;
  v36 = 0;
  v8 = SettingGuid;
  v9 = 0LL;
  v37 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, a4, 1952797520LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  sub_1402D5E5C(0);
  memmove(Pool2, Src, (unsigned int)v5);
  sub_1407519BC(v8, (unsigned int)v5, Pool2);
  v35 = sub_14075197C(v8);
  ExAcquireFastMutex(&stru_140C237C0);
  v39 = sub_140751880(v8, a2);
  v11 = v39;
  if ( !v39 )
  {
    v24 = ExAllocatePool2(256LL, 88LL, 1952797520LL);
    v39 = v24;
    v11 = v24;
    if ( !v24 )
    {
      v13 = -1073741670;
      v14 = 0;
      goto LABEL_6;
    }
    *(GUID *)(v24 + 32) = *v8;
    v25 = sub_140751908(v8);
    v26 = (__int64 *)(v11 + 16);
    v27 = v25;
    *(_QWORD *)(v11 + 24) = v11 + 16;
    *(_QWORD *)(v11 + 16) = v11 + 16;
    if ( !v35 )
    {
      v28 = (__int64 *)qword_140C22400;
      while ( v28 != &qword_140C22400 )
      {
        v29 = v28;
        v28 = (__int64 *)*v28;
        v30 = *(__int64 *)((char *)v29 + 36) - *(_QWORD *)&v8->Data1;
        if ( !v30 )
          v30 = *(__int64 *)((char *)v29 + 44) - *(_QWORD *)v8->Data4;
        if ( !v30 )
        {
          v31 = (__int64 **)v28[1];
          if ( *v31 != v28 )
            goto LABEL_61;
          v32 = (__int64 **)v31[1];
          if ( *v32 != (__int64 *)v31 )
            goto LABEL_61;
          v28[1] = (__int64)v32;
          *v32 = v28;
          v33 = *(__int64 **)(v11 + 24);
          if ( (__int64 *)*v33 != v26 )
            goto LABEL_61;
          *v31 = v26;
          v31[1] = v33;
          *v33 = (__int64)v31;
          *(_QWORD *)(v11 + 24) = v31;
        }
      }
      a2 = -1;
    }
    *(_DWORD *)(v11 + 48) = a2;
    v34 = *(__int64 **)(v27 + 8);
    if ( *v34 != v27 )
LABEL_61:
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v34;
    *(_QWORD *)v11 = v27;
    *v34 = v11;
    *(_QWORD *)(v27 + 8) = v11;
    v36 = 1;
    if ( stru_140C4EF08.Data[0] || stru_140C4EF08.Data[1] )
      v37 = 1;
  }
  v12 = *(_DWORD **)(v11 + 8LL * a3 + 64);
  if ( (unsigned __int8)sub_140751840(v12, Pool2, (unsigned int)v5) )
  {
    v13 = 0;
  }
  else
  {
    v16 = a3;
    v17 = (_QWORD *)(v11 + 64);
    v18 = 0;
    for ( i = 0LL; i < 3; ++i )
    {
      if ( i != v16 )
      {
        if ( !v9 )
        {
          v20 = (unsigned __int8)sub_140751840(*v17, Pool2, (unsigned int)v5) == 0;
          v16 = a3;
          if ( !v20 )
          {
            v9 = (_DWORD *)*v17;
            ++*(_DWORD *)*v17;
          }
        }
        if ( (_DWORD *)*v17 == v12 )
          v18 = 1;
      }
      ++v17;
    }
    v13 = 0;
    if ( v9 )
    {
      v10 = Pool2;
    }
    else
    {
      v21 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v5 + 12), 1952797520LL);
      v9 = v21;
      if ( !v21 )
      {
        v6 = 0;
        v13 = -1073741670;
        v10 = Pool2;
        v8 = SettingGuid;
        v14 = 0;
        goto LABEL_6;
      }
      v21[1] = v5;
      *v21 = 1;
      do
        v22 = _InterlockedIncrement(&dword_140CE2058);
      while ( !v22 );
      v10 = Pool2;
      v9[2] = v22;
      memmove(v9 + 3, Pool2, v5);
    }
    if ( v12 )
    {
      if ( !v18 )
      {
        for ( j = *(_QWORD **)(v39 + 16); j != (_QWORD *)(v39 + 16); j = (_QWORD *)*j )
        {
          if ( (_DWORD *)j[9] == v12 )
            j[9] = 0LL;
        }
      }
      v20 = (*v12)-- == 1;
      if ( v20 )
        ExFreePoolWithTag(v12, 0x74655350u);
    }
    v6 = 0;
    *(_QWORD *)(v39 + 8LL * a3 + 64) = v9;
    if ( dword_140C232CC == a3 )
      v6 = v35 == 0;
    if ( *(_DWORD *)(v39 + 56) || *(_DWORD *)(v39 + 60) )
    {
      *(_DWORD *)(v39 + 52) |= 1u;
      v14 = 1;
      v8 = SettingGuid;
      goto LABEL_6;
    }
    v8 = SettingGuid;
  }
  v14 = 0;
LABEL_6:
  KeReleaseGuardedMutex(&stru_140C237C0);
  if ( v36 )
    PoRegisterPowerSettingCallback(0LL, v8, (PPOWER_SETTING_CALLBACK)sub_1406DFDF0, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( (unsigned int)dword_140C22F80 >= 3 )
  {
    if ( v37 )
      ZwUpdateWnfStateData(&stru_140C4EF08, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( v6 )
    {
      sub_1402D5E5C(1);
      sub_1402D6220(0x20u);
    }
    if ( v14 )
      sub_1402D6220(0x80u);
  }
  sub_1402D5EE4(0);
  return v13;
}
