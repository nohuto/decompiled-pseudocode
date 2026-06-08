/*
 * XREFs of GetHwDebugRegisters @ 0x1C002CB90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0003380 (__report_rangecheckfailure.c)
 *     GetCpuIdInfo @ 0x1C00036D0 (GetCpuIdInfo.c)
 *     IsPackageThermStatusSupported @ 0x1C002CDC0 (IsPackageThermStatusSupported.c)
 *     GetCPUFamilyAndModel @ 0x1C0044008 (GetCPUFamilyAndModel.c)
 */

__int64 __fastcall GetHwDebugRegisters(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // esi
  char v4; // r12
  __int16 v5; // r13
  _QWORD *v6; // rdx
  unsigned int v7; // r11d
  __int64 v8; // rbp
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  int v11; // edi
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // cx
  __int64 Pool2; // rdx
  unsigned int v15; // r8d
  _BYTE *v16; // r10
  wchar_t **v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  _BYTE v24[4]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v25; // [rsp+24h] [rbp-54h] BYREF
  _BYTE v26[8]; // [rsp+28h] [rbp-50h] BYREF
  __int128 v27; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  *(_BYTE *)a1 = 0;
  v25 = 0;
  v24[0] = 0;
  v27 = 0LL;
  GetCpuIdInfo(1u, &v27);
  v3 = (HIDWORD(v27) >> 22) & 1;
  v4 = IsPackageThermStatusSupported();
  GetCPUFamilyAndModel(&v25, v24);
  v5 = v25;
  v6 = &off_1C0015078;
  v7 = 0;
  v8 = 2LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  do
  {
    if ( v10 >= 0x70 )
      _report_rangecheckfailure();
    v26[v9] = 0;
    if ( *((_WORD *)v6 - 4) == v5 )
    {
      v12 = *((_WORD *)v6 - 3);
      v13 = 0;
      if ( v12 )
      {
        while ( 1 )
        {
          v5 = v25;
          if ( *(_BYTE *)(v13 + *v6) == v24[0] )
            break;
          if ( ++v13 >= v12 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        if ( v13 == v12 )
          goto LABEL_11;
      }
      v26[v9] = 1;
      ++v11;
    }
LABEL_11:
    ++v7;
    ++v9;
    v10 += 56LL;
    v6 += 7;
  }
  while ( v7 < 2 );
  if ( (_BYTE)v3 )
    ++v11;
  if ( v4 )
    ++v11;
  if ( v11 )
  {
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(40 * v11), 1919119952LL);
    if ( Pool2 )
    {
      v15 = 0;
      v16 = v26;
      v17 = &off_1C0015080;
      do
      {
        if ( *v16 )
        {
          v18 = v15++;
          v19 = 5 * v18;
          *(_OWORD *)(Pool2 + 8 * v19) = *(_OWORD *)v17;
          *(_OWORD *)(Pool2 + 8 * v19 + 16) = *((_OWORD *)v17 + 1);
          *(_QWORD *)(Pool2 + 8 * v19 + 32) = v17[4];
        }
        ++v16;
        v17 += 7;
        --v8;
      }
      while ( v8 );
      if ( (_BYTE)v3 )
      {
        v20 = v15++;
        v21 = 5 * v20;
        *(_OWORD *)(Pool2 + 8 * v21) = *(_OWORD *)&ThermStatusDebugRegister;
        *(_OWORD *)(Pool2 + 8 * v21 + 16) = unk_1C0015300;
        *(_QWORD *)(Pool2 + 8 * v21 + 32) = qword_1C0015310;
      }
      if ( v4 )
      {
        v22 = 5LL * v15;
        *(_OWORD *)(Pool2 + 8 * v22) = *(_OWORD *)&PackageThermStatusDebugRegister;
        *(_OWORD *)(Pool2 + 8 * v22 + 16) = *(_OWORD *)&byte_1C0015120;
        *(_QWORD *)(Pool2 + 8 * v22 + 32) = off_1C0015130;
      }
      *(_BYTE *)a1 = v11;
      *(_QWORD *)(a1 + 8) = Pool2;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
