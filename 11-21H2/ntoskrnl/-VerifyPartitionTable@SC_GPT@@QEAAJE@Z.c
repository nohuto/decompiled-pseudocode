/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1406500D8
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x1406515AC (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14064FBF4 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14064FC7C (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1406516CC (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9550 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x140930250 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  SC_DISK *v2; // rax
  __int16 *v3; // r12
  unsigned int v5; // ebx
  __int64 v6; // r14
  bool v7; // cf
  unsigned int v8; // r13d
  __int64 v9; // rdi
  unsigned __int8 v10; // r8
  int v11; // edx
  int v12; // esi
  unsigned int v13; // edx
  unsigned int v14; // esi
  struct GPT_ENTRY *v15; // rax
  struct GPT_ENTRY *v16; // rdi
  struct GPT_ENTRY *v17; // rsi
  unsigned int v18; // ebx
  SC_DISK *v19; // r10
  __int64 v20; // r9
  __int64 *v21; // rbx
  void **v22; // rsi
  __int64 v23; // rbx
  int v24; // edx
  int v25; // ecx
  BOOL v26; // r12d
  int v27; // eax
  __int64 v28; // rdi
  int v29; // r14d
  __int64 v30; // rax
  unsigned int v31; // r14d
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r8
  void *v34; // r9
  void **v35; // rdi
  __int64 v36; // rsi
  __int128 v38; // [rsp+20h] [rbp-30h] BYREF
  __int128 v39; // [rsp+30h] [rbp-20h] BYREF
  __int128 v40; // [rsp+40h] [rbp-10h] BYREF
  __int16 v41; // [rsp+90h] [rbp+40h] BYREF
  char v42; // [rsp+98h] [rbp+48h]

  v42 = a2;
  v2 = *this;
  v3 = &v41;
  v41 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = (*((_BYTE *)v2 + 200) & 1) != 0;
  v40 = 0LL;
  v8 = 2 - v7;
  v39 = 0LL;
  v38 = 0LL;
  do
  {
    v9 = *((_QWORD *)*this + 33);
    *(_QWORD *)((char *)&v38 + v6) = v9;
    if ( (int)SC_GPT::ReadHeader(this, v5, (struct GPT_HEADER *)v9) >= 0 )
    {
      v11 = *((_DWORD *)*this + 59);
      v12 = v11 - 1;
      v13 = -v11;
      v14 = v13 & (*(_DWORD *)(v9 + 80) * *(_DWORD *)(v9 + 84) + v12);
      v15 = (struct GPT_ENTRY *)SC_ENV::Allocate(v14 + (1 << *((_DWORD *)*this + 60)), v13, v10);
      *(_QWORD *)((char *)&v40 + v6) = v15;
      v16 = v15;
      if ( !v15 )
      {
        v18 = -1073741670;
        goto LABEL_34;
      }
      if ( v5 )
      {
        v17 = v15;
        v16 = (struct GPT_ENTRY *)((char *)v15 + (1 << *((_DWORD *)*this + 60)));
      }
      else
      {
        v17 = (struct GPT_ENTRY *)((char *)v15 + v14);
      }
      *(_QWORD *)((char *)&v38 + v6) = v17;
      *(_QWORD *)((char *)&v39 + v6) = v16;
      memmove(v17, *((const void **)*this + 33), 1 << *((_DWORD *)*this + 60));
      if ( (int)SC_GPT::ReadEntries(this, v17, v16) >= 0 )
        *(_BYTE *)v3 = 1;
    }
    ++v5;
    v6 += 8LL;
    v3 = (__int16 *)((char *)v3 + 1);
  }
  while ( v5 < v8 );
  v18 = 0;
  if ( !v41 )
  {
LABEL_11:
    v18 = -1073741774;
    goto LABEL_34;
  }
  v19 = *this;
  if ( (*((_DWORD *)*this + 50) & 1) == 0 )
  {
    if ( !(_BYTE)v41
      || !HIBYTE(v41)
      || __PAIR128__(*(_QWORD *)(*((_QWORD *)&v38 + 1) + 24LL), *(_QWORD *)(*((_QWORD *)&v38 + 1) + 32LL)) != *(_OWORD *)(v38 + 24)
      || *(_OWORD *)(*((_QWORD *)&v38 + 1) + 40LL) != *(_OWORD *)(v38 + 40)
      || *(_QWORD *)(*((_QWORD *)&v38 + 1) + 80LL) != *(_QWORD *)(v38 + 80)
      || *(_DWORD *)(*((_QWORD *)&v38 + 1) + 88LL) != *(_DWORD *)(v38 + 88) )
    {
      goto LABEL_23;
    }
    v20 = *(_QWORD *)(*((_QWORD *)&v38 + 1) + 56LL) - *(_QWORD *)(v38 + 56);
    if ( !v20 )
      v20 = *(_QWORD *)(*((_QWORD *)&v38 + 1) + 64LL) - *(_QWORD *)(v38 + 64);
    if ( v20 )
    {
LABEL_23:
      if ( !v42 )
        goto LABEL_11;
      if ( (_BYTE)v41 )
      {
        v21 = (__int64 *)&v38;
        v22 = (void **)&v39;
      }
      else
      {
        v21 = (__int64 *)&v38 + 1;
        v22 = (void **)&v39 + 1;
      }
      v23 = *v21;
      v24 = *((_DWORD *)v19 + 59);
      v25 = *((_DWORD *)v19 + 60);
      v26 = (_BYTE)v41 != 0;
      v27 = *(_DWORD *)(v23 + 80) * *(_DWORD *)(v23 + 84);
      *(_DWORD *)(v23 + 16) = 0;
      v28 = *(_QWORD *)(v23 + 32);
      v29 = v27 + v24 - 1;
      v30 = *(_QWORD *)(v23 + 24);
      *(_QWORD *)(v23 + 24) = v28;
      v31 = (-v24 & (unsigned int)v29) >> v25;
      *(_QWORD *)(v23 + 32) = v30;
      if ( v26 )
        v32 = v28 - v31;
      else
        v32 = v28 + 1;
      *(_QWORD *)(v23 + 72) = v32;
      *(_DWORD *)(v23 + 16) = RtlComputeCrc32(0, (char *)v23, *(_DWORD *)(v23 + 12));
      if ( v26 )
      {
        v34 = *v22;
        v33 = v32;
      }
      else
      {
        v33 = *(_QWORD *)(v23 + 24);
        v34 = (void *)v23;
      }
      v18 = SC_DISK::WriteSectors(*this, v31 + 1, v33, v34);
    }
  }
LABEL_34:
  v35 = (void **)&v40;
  v36 = 2LL;
  do
  {
    if ( *v35 )
      SC_ENV::Free(*v35);
    ++v35;
    --v36;
  }
  while ( v36 );
  return v18;
}
