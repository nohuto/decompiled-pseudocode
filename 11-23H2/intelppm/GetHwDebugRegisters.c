/*
 * XREFs of GetHwDebugRegisters @ 0x1C002DD80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00037B0 (__report_rangecheckfailure.c)
 *     GetCpuIdInfo @ 0x1C0004200 (GetCpuIdInfo.c)
 *     IsPackageThermStatusSupported @ 0x1C002DFB8 (IsPackageThermStatusSupported.c)
 *     GetCPUFamilyAndModel @ 0x1C0046008 (GetCPUFamilyAndModel.c)
 */

__int64 __fastcall GetHwDebugRegisters(_BYTE *a1)
{
  unsigned int v1; // ebx
  _BYTE *v2; // r15
  int v3; // esi
  char v4; // r12
  __int16 v5; // r13
  _QWORD *v6; // rdx
  int v7; // r9d
  __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // r11
  unsigned int v11; // edi
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // cx
  int v14; // edi
  __int64 Pool2; // rdx
  unsigned int v16; // r8d
  _BYTE *v17; // r10
  wchar_t **v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _BYTE v25[4]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v26; // [rsp+24h] [rbp-54h] BYREF
  _BYTE v27[8]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE *v28; // [rsp+30h] [rbp-48h]
  __int128 v29; // [rsp+38h] [rbp-40h] BYREF

  v1 = 0;
  v28 = a1;
  v2 = a1;
  *a1 = 0;
  v26 = 0;
  v25[0] = 0;
  v29 = 0LL;
  GetCpuIdInfo(1u, &v29);
  v3 = (HIDWORD(v29) >> 22) & 1;
  v4 = IsPackageThermStatusSupported();
  GetCPUFamilyAndModel(&v26, v25);
  v5 = v26;
  v6 = &off_1C0016078;
  v7 = 0;
  v8 = 2LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  do
  {
    if ( v10 >= 0x70 )
      _report_rangecheckfailure();
    v27[v9] = 0;
    if ( *((_WORD *)v6 - 4) == v5 )
    {
      v12 = *((_WORD *)v6 - 3);
      v13 = 0;
      if ( v12 )
      {
        do
        {
          if ( *(_BYTE *)(v13 + *v6) == v25[0] )
            break;
          ++v13;
        }
        while ( v13 < v12 );
        v2 = v28;
        v5 = v26;
      }
      if ( v13 != v12 )
      {
        v27[v9] = 1;
        ++v7;
      }
    }
    ++v11;
    ++v9;
    v10 += 56LL;
    v6 += 7;
  }
  while ( v11 < 2 );
  v14 = v7 + 1;
  if ( !(_BYTE)v3 )
    v14 = v7;
  if ( v4 )
    ++v14;
  if ( v14 )
  {
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(40 * v14), 1919119952LL);
    if ( Pool2 )
    {
      v16 = 0;
      v17 = v27;
      v18 = &off_1C0016080;
      do
      {
        if ( *v17 )
        {
          v19 = v16++;
          v20 = 5 * v19;
          *(_OWORD *)(Pool2 + 8 * v20) = *(_OWORD *)v18;
          *(_OWORD *)(Pool2 + 8 * v20 + 16) = *((_OWORD *)v18 + 1);
          *(_QWORD *)(Pool2 + 8 * v20 + 32) = v18[4];
        }
        ++v17;
        v18 += 7;
        --v8;
      }
      while ( v8 );
      if ( (_BYTE)v3 )
      {
        v21 = v16++;
        v22 = 5 * v21;
        *(_OWORD *)(Pool2 + 8 * v22) = *(_OWORD *)&ThermStatusDebugRegister;
        *(_OWORD *)(Pool2 + 8 * v22 + 16) = unk_1C0016300;
        *(_QWORD *)(Pool2 + 8 * v22 + 32) = qword_1C0016310;
      }
      if ( v4 )
      {
        v23 = 5LL * v16;
        *(_OWORD *)(Pool2 + 8 * v23) = *(_OWORD *)&PackageThermStatusDebugRegister;
        *(_OWORD *)(Pool2 + 8 * v23 + 16) = *(_OWORD *)&byte_1C0016120;
        *(_QWORD *)(Pool2 + 8 * v23 + 32) = off_1C0016130;
      }
      *v2 = v14;
      *((_QWORD *)v2 + 1) = Pool2;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
