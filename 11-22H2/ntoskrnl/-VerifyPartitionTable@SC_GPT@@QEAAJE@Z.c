/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14067489C
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x140675E0C (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14032D240 (RtlComputeCrc32.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x1406743AC (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140674434 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x140675F2C (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DEFD0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x1409403B0 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  SC_DISK *v2; // rax
  __int16 *v3; // r12
  unsigned int v5; // ebx
  __int64 v6; // r14
  bool v7; // cf
  unsigned int v8; // r13d
  _DWORD *v9; // rdi
  unsigned __int8 v10; // r8
  int v11; // edx
  int v12; // esi
  unsigned int v13; // edx
  unsigned int v14; // esi
  char *v15; // rax
  char *v16; // rdi
  char *v17; // rsi
  unsigned int v18; // edi
  SC_DISK *v19; // r9
  _DWORD *v20; // rbx
  __int64 v21; // r8
  void *v22; // r14
  int v23; // edx
  int v24; // ecx
  BOOL v25; // r12d
  int v26; // eax
  unsigned __int64 v27; // rsi
  int v28; // r13d
  __int64 v29; // rax
  unsigned int v30; // r13d
  unsigned __int64 v31; // rdi
  void *v32; // r9
  unsigned __int64 v33; // r8
  void **v34; // rbx
  __int64 v35; // rsi
  PVOID Buffer[2]; // [rsp+20h] [rbp-30h]
  void *v38[2]; // [rsp+30h] [rbp-20h]
  __int128 v39; // [rsp+40h] [rbp-10h] BYREF
  __int16 v40; // [rsp+90h] [rbp+40h] BYREF
  char v41; // [rsp+98h] [rbp+48h]

  v41 = a2;
  v2 = *this;
  v3 = &v40;
  v40 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = (*((_BYTE *)v2 + 200) & 1) != 0;
  v39 = 0LL;
  v8 = 2 - v7;
  *(_OWORD *)v38 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  do
  {
    v9 = (_DWORD *)*((_QWORD *)*this + 33);
    Buffer[v6] = v9;
    if ( (int)SC_GPT::ReadHeader(this, v5, (struct GPT_HEADER *)v9) >= 0 )
    {
      v11 = *((_DWORD *)*this + 59);
      v12 = v11 - 1;
      v13 = -v11;
      v14 = v13 & (v9[20] * v9[21] + v12);
      v15 = (char *)SC_ENV::Allocate(v14 + (1 << *((_DWORD *)*this + 60)), v13, v10);
      *(_QWORD *)((char *)&v39 + v6 * 8) = v15;
      v16 = v15;
      if ( !v15 )
      {
        v18 = -1073741670;
        goto LABEL_37;
      }
      if ( v5 )
      {
        v17 = v15;
        v16 = &v15[1 << *((_DWORD *)*this + 60)];
      }
      else
      {
        v17 = &v15[v14];
      }
      Buffer[v6] = v17;
      v38[v6] = v16;
      memmove(v17, *((const void **)*this + 33), 1 << *((_DWORD *)*this + 60));
      if ( (int)SC_GPT::ReadEntries(this, (struct GPT_HEADER *)v17, (struct GPT_ENTRY *)v16) >= 0 )
        *(_BYTE *)v3 = 1;
    }
    ++v5;
    ++v6;
    v3 = (__int16 *)((char *)v3 + 1);
  }
  while ( v5 < v8 );
  v18 = 0;
  if ( !v40 )
  {
LABEL_11:
    v18 = -1073741774;
    goto LABEL_37;
  }
  v19 = *this;
  if ( (*((_DWORD *)*this + 50) & 1) == 0 )
  {
    v20 = Buffer[0];
    if ( !(_BYTE)v40
      || !HIBYTE(v40)
      || *((_QWORD *)Buffer[1] + 3) != *((_QWORD *)Buffer[0] + 4)
      || *((_QWORD *)Buffer[1] + 4) != *((_QWORD *)Buffer[0] + 3)
      || *((_QWORD *)Buffer[1] + 5) != *((_QWORD *)Buffer[0] + 5)
      || *((_QWORD *)Buffer[1] + 6) != *((_QWORD *)Buffer[0] + 6)
      || *((_DWORD *)Buffer[1] + 20) != *((_DWORD *)Buffer[0] + 20)
      || *((_DWORD *)Buffer[1] + 21) != *((_DWORD *)Buffer[0] + 21)
      || *((_DWORD *)Buffer[1] + 22) != *((_DWORD *)Buffer[0] + 22) )
    {
      goto LABEL_26;
    }
    v21 = *((_QWORD *)Buffer[1] + 7) - *((_QWORD *)Buffer[0] + 7);
    if ( !v21 )
      v21 = *((_QWORD *)Buffer[1] + 8) - *((_QWORD *)Buffer[0] + 8);
    if ( v21 )
    {
LABEL_26:
      if ( !v41 )
        goto LABEL_11;
      if ( (_BYTE)v40 )
      {
        v22 = v38[0];
      }
      else
      {
        v22 = v38[1];
        v20 = Buffer[1];
      }
      v23 = *((_DWORD *)v19 + 59);
      v24 = *((_DWORD *)v19 + 60);
      v25 = (_BYTE)v40 != 0;
      v26 = v20[20] * v20[21];
      v20[4] = 0;
      v27 = *((_QWORD *)v20 + 4);
      v28 = v26 + v23 - 1;
      v29 = *((_QWORD *)v20 + 3);
      *((_QWORD *)v20 + 3) = v27;
      v30 = (-v23 & (unsigned int)v28) >> v24;
      *((_QWORD *)v20 + 4) = v29;
      if ( v25 )
        v31 = v27 - v30;
      else
        v31 = v27 + 1;
      *((_QWORD *)v20 + 9) = v31;
      v20[4] = RtlComputeCrc32(0, v20, v20[3]);
      if ( v25 )
      {
        v32 = v22;
        v33 = v31;
      }
      else
      {
        v32 = v20;
        v33 = v27;
      }
      v18 = SC_DISK::WriteSectors(*this, v30 + 1, v33, v32);
    }
  }
LABEL_37:
  v34 = (void **)&v39;
  v35 = 2LL;
  do
  {
    if ( *v34 )
      SC_ENV::Free(*v34);
    ++v34;
    --v35;
  }
  while ( v35 );
  return v18;
}
