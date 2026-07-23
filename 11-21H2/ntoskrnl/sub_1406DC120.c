/*
 * XREFs of sub_1406DC120 @ 0x1406DC120
 * Callers:
 *     <none>
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140540798 @ 0x140540798 (sub_140540798.c)
 *     KdDisableDebugger @ 0x140565360 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140565580 (KdEnableDebugger.c)
 *     sub_140565974 @ 0x140565974 (sub_140565974.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1408536D4 @ 0x1408536D4 (sub_1408536D4.c)
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406DC120(
        int a1,
        unsigned __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int Length,
        _DWORD *a6)
{
  __int64 v7; // r15
  KPROCESSOR_MODE v10; // r13
  int v11; // ebx
  __int64 v12; // r13
  int v13; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // eax
  int v22; // edi
  int v23; // edi
  int v24; // edi
  unsigned int v25; // eax
  size_t v26; // rsi
  PVOID PoolWithTag; // rdi
  KPROCESSOR_MODE v28; // [rsp+34h] [rbp-D4h]
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+68h] [rbp-A0h]
  __int128 v35; // [rsp+78h] [rbp-90h]
  unsigned __int64 v36; // [rsp+88h] [rbp-80h]
  _OWORD v37[7]; // [rsp+90h] [rbp-78h] BYREF

  v7 = a3;
  LODWORD(NumberOfBytes) = Length;
  LODWORD(Size) = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(v37, 0, 0x40uLL);
  v31 = 0LL;
  P = 0LL;
  if ( byte_140C09804 && !byte_140C31E42 && ((a1 - 29) & 0xFFFFFFF7) != 0 )
    return 3221226324LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  v28 = v10;
  if ( a1 != 38 && !SeSinglePrivilegeCheck(stru_140D3CA18, v10) )
    return 3221225506LL;
  v11 = 0;
  if ( v10 )
  {
    if ( (_DWORD)v7 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = 0x7FFFFFFF0000LL;
      if ( a2 + v7 > 0x7FFFFFFF0000LL || a2 + v7 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v12 = 0x7FFFFFFF0000LL;
    }
    if ( Length )
      ProbeForWrite(a4, Length, 4u);
    if ( a6 )
    {
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a6;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
    v10 = v28;
  }
  if ( a1 <= 28 )
  {
    if ( a1 == 28 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        byte_140C40501 = *(_BYTE *)a2 == 0;
        goto LABEL_25;
      }
      return 3221225476LL;
    }
    if ( a1 > 23 )
    {
      v22 = a1 - 24;
      if ( !v22 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          byte_140C40502 = *(_BYTE *)a2 != 0;
          goto LABEL_25;
        }
        return 3221225476LL;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        if ( Length == 4 )
        {
          *a4 = dword_140C0C6CC;
          goto LABEL_25;
        }
        return 3221225476LL;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        if ( (_DWORD)v7 != 4 )
          return 3221225476LL;
        HIDWORD(Size) = 0;
        v21 = sub_140565974(*(_DWORD *)a2);
LABEL_43:
        v11 = v21;
        goto LABEL_25;
      }
      if ( v24 == 1 )
      {
        if ( Length == 1 )
        {
          *(_BYTE *)a4 = byte_140C40501 == 0;
          goto LABEL_25;
        }
        return 3221225476LL;
      }
LABEL_103:
      v11 = -1073741821;
      goto LABEL_25;
    }
    if ( a1 == 23 )
    {
      if ( Length == 1 )
      {
        *(_BYTE *)a4 = byte_140C40502;
        goto LABEL_25;
      }
      return 3221225476LL;
    }
    if ( a1 < 0 )
      goto LABEL_103;
    if ( a1 > 5 )
    {
      if ( a1 == 6 )
      {
        if ( (_BYTE)KdDebuggerEnabled == 1 )
          DbgBreakPointWithStatus(6u);
        else
          v11 = -1073741823;
        goto LABEL_25;
      }
      if ( a1 > 20 )
      {
        if ( a1 == 21 )
          v21 = KdEnableDebugger();
        else
          v21 = KdDisableDebugger();
        goto LABEL_43;
      }
    }
    return 3221225474LL;
  }
  if ( a1 > 34 )
  {
    v13 = a1 - 35;
    if ( !v13 )
    {
      if ( Length == 4 )
      {
        *a4 = dword_140C40424;
        if ( !byte_140C40430 )
        {
LABEL_24:
          v11 = 0;
          goto LABEL_25;
        }
LABEL_107:
        dword_140C40424 = 0;
        goto LABEL_24;
      }
      return 3221225476LL;
    }
    v19 = v13 - 1;
    if ( !v19 )
      goto LABEL_107;
    v20 = v19 - 1;
    if ( !v20 )
    {
      if ( (_DWORD)v7 != 64 || Length )
        return 3221225476LL;
      v37[0] = *(_OWORD *)a2;
      v37[1] = *(_OWORD *)(a2 + 16);
      v37[2] = *(_OWORD *)(a2 + 32);
      v37[3] = *(_OWORD *)(a2 + 48);
      v21 = sub_140540798((__int64)v37);
      goto LABEL_43;
    }
    if ( v20 == 1 )
    {
      if ( (_DWORD)v7 != 16 || Length )
        return 3221225476LL;
      v21 = sub_1408536D4(a2);
      goto LABEL_43;
    }
    goto LABEL_103;
  }
  if ( a1 == 34 )
  {
LABEL_80:
    dword_140C40428 = 0;
    goto LABEL_24;
  }
  v15 = a1 - 29;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( Length == 1 )
      {
        *(_BYTE *)a4 = byte_140C44528;
        goto LABEL_25;
      }
      return 3221225476LL;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        byte_140C44528 = *(_BYTE *)a2;
        goto LABEL_25;
      }
      return 3221225476LL;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      dword_140C4042C = -618808389;
      goto LABEL_24;
    }
    if ( v18 != 1 )
      goto LABEL_103;
    if ( Length != 4 )
      return 3221225476LL;
    *a4 = dword_140C40428;
    if ( !byte_140C40420 )
      goto LABEL_24;
    goto LABEL_80;
  }
  if ( (_DWORD)v7 != 56 || Length < 0x40000 )
    return 3221225476LL;
  v33 = *(_OWORD *)a2;
  v34 = *(_OWORD *)(a2 + 16);
  v35 = *(_OWORD *)(a2 + 32);
  v36 = *(_QWORD *)(a2 + 48);
  if ( DWORD2(v35) || !HIDWORD(v35) || (v33 & 0xFFFFFFFE) != 0 || 8 * (unsigned __int64)HIDWORD(v35) > 0xFFFFFFFF )
    return 3221225485LL;
  v25 = 0x100000;
  if ( Length <= 0x100000 )
    v25 = NumberOfBytes;
  v26 = v25;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x704E534Bu);
  NumberOfBytes = (SIZE_T)PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = sub_1406A904C(v36, 8 * HIDWORD(v35), v10, IoReadAccess, &v31, (struct _MDL **)&P);
    if ( v11 >= 0 )
    {
      memset(PoolWithTag, 0, v26);
      v36 = v31;
      v11 = sub_14092AC5C(&v33, PoolWithTag, (unsigned int)v26, &Size);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)Size <= Length )
          memmove(a4, PoolWithTag, (unsigned int)Size);
        else
          v11 = -1073741823;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      sub_140231450((struct _MDL *)P);
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  else
  {
    v11 = -1073741801;
  }
LABEL_25:
  if ( a6 )
    *a6 = Size;
  return (unsigned int)v11;
}
