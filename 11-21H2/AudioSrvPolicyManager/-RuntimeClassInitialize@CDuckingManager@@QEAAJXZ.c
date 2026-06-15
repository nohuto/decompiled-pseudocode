/*
 * XREFs of ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x1800124E4
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000CDB0 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CDuckingManager::RuntimeClassInitialize(CDuckingManager *this)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  HANDLE v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  int v9; // ecx
  float v10; // xmm6_4
  HANDLE v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = &DuckingDescriptor::`vftable';
    v3[2] = 0;
    *((_BYTE *)v3 + 12) = 0;
    *((_QWORD *)v3 + 2) = 0LL;
    v3[6] = 0;
    v5 = GetProcessHeap();
    v6 = HeapAlloc(v5, 0, 0x18uLL);
    v7 = v6;
    if ( v6 )
    {
      v6[2] = 1;
      v6[3] = 1;
      *(_QWORD *)v6 = &std::_Ref_count_resource<DuckingDescriptor *,std::default_delete<DuckingDescriptor>>::`vftable';
      *((_QWORD *)v6 + 2) = v4;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = 0LL;
  }
  v7 = 0LL;
LABEL_6:
  v15 = *((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = v4;
  v16 = *((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = v7;
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v15);
  v8 = *((_DWORD *)this + 102);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        v10 = FLOAT_N6_0;
      else
        v10 = 0.0;
    }
    else
    {
      v10 = FLOAT_N18_0;
    }
  }
  else
  {
    v10 = FLOAT_N96_0;
  }
  v11 = GetProcessHeap();
  v12 = HeapAlloc(v11, 0, 0x30uLL);
  v13 = v12;
  if ( v12 )
  {
    v12[2] = 1;
    v12[3] = 1;
    *(_QWORD *)v12 = &std::_Ref_count_obj2<DuckingDescriptor>::`vftable';
    *((_QWORD *)v12 + 2) = &DuckingDescriptor::`vftable';
    *((float *)v12 + 6) = v10;
    *((_BYTE *)v12 + 28) = 0;
    *((_QWORD *)v12 + 4) = 10000000LL;
    v12[10] = 0;
  }
  else
  {
    v13 = 0LL;
  }
  v17 = 0LL;
  v15 = *((_QWORD *)this + 54);
  *((_QWORD *)this + 54) = v13 + 4;
  v16 = *((_QWORD *)this + 55);
  *((_QWORD *)this + 55) = v13;
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v15);
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v17);
  return 0LL;
}
