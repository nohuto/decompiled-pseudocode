/*
 * XREFs of sub_1C00480F8 @ 0x1C00480F8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0012F88 @ 0x1C0012F88 (sub_1C0012F88.c)
 *     sub_1C0020EFC @ 0x1C0020EFC (sub_1C0020EFC.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C0032AE8 @ 0x1C0032AE8 (sub_1C0032AE8.c)
 *     sub_1C0044FB8 @ 0x1C0044FB8 (sub_1C0044FB8.c)
 *     sub_1C004511C @ 0x1C004511C (sub_1C004511C.c)
 *     sub_1C004514C @ 0x1C004514C (sub_1C004514C.c)
 *     sub_1C004C09C @ 0x1C004C09C (sub_1C004C09C.c)
 *     sub_1C004CB40 @ 0x1C004CB40 (sub_1C004CB40.c)
 */

__int64 __fastcall sub_1C00480F8(__int64 a1, __int64 a2, bool *a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  char v8; // al
  int *v9; // rcx
  int *v10; // rax
  int *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  size_t v16; // r15
  _QWORD *v17; // r14
  __int64 v18; // rax
  int v19; // eax
  unsigned __int8 v20; // r8
  int v21; // eax
  unsigned __int8 v22; // r8
  bool v23; // cl
  char v24; // r8
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // [rsp+28h] [rbp-40h]
  __int64 v31; // [rsp+78h] [rbp+10h] BYREF

  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = sub_1C000E2EC(a1);
  v6 = v5;
  if ( !v5 )
    return 3238002694LL;
  if ( byte_1C0093AEC )
  {
    *((_BYTE *)v5 + 110) |= 4u;
    return 0LL;
  }
  v8 = *((_BYTE *)v5 + 107);
  if ( (v8 & 0x20) != 0 )
    return 3221225473LL;
  if ( *((_QWORD *)v6 + 612) )
  {
    if ( a3 )
      *a3 = (v8 & 0x10) != 0;
    return 0LL;
  }
  if ( !sub_1C004514C((int *)a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 8) != 1 )
    return 3238002694LL;
  v10 = (int *)sub_1C0012F88(v9, 0);
  v11 = v10;
  if ( !v10 || !sub_1C004511C(v10) || (unsigned int)(*(_DWORD *)(v13 + 8) - 1) > 7 )
    return 3238002694LL;
  v14 = *((_QWORD *)v11 + 2) - 0x481F895FDCAF9C10LL;
  if ( *((_QWORD *)v11 + 2) == 0x481F895FDCAF9C10LL )
    v14 = *((_QWORD *)v11 + 3) - 0x3356F5D2CED492A4LL;
  if ( v14 )
    return 3238002694LL;
  v31 &= v12;
  if ( (int)sub_1C004CB40(*((_QWORD *)v6 + 1), a2, v6, &v31) < 0 )
    return 3238002689LL;
  v15 = sub_1C0044FB8((int *)a2);
  v16 = v15;
  v17 = (_QWORD *)sub_1C0007CF4(64LL, v15 + 144, 1330667858LL, *((_QWORD *)v6 + 1));
  if ( v17 )
  {
    v18 = v31;
    *((_DWORD *)v17 + 4) = 0;
    *v17 = v18;
    v19 = *((_DWORD *)v17 + 5) | 3;
    *((_DWORD *)v17 + 5) = v19;
    if ( v11[2] == 1 )
      *((_DWORD *)v17 + 5) = v19 | 0x100;
    v17[1] = v17 + 18;
    memmove(v17 + 18, (const void *)a2, v16);
    v20 = *((_BYTE *)v6 + 107);
    if ( (((*(_BYTE *)(a2 + 12) & 4) != 0) & (v20 >> 3)) != 0
      && (v21 = sub_1C0020EFC(*((struct _DEVICE_OBJECT **)v6 + 1), 1), v20 = *((_BYTE *)v6 + 107), v21 >= 0) )
    {
      v22 = v20 | 0x10;
      *((_BYTE *)v6 + 107) = v22;
      if ( a3 )
      {
        *a3 = 1;
        v22 = *((_BYTE *)v6 + 107);
      }
    }
    else
    {
      v22 = v20 & 0xEF;
      *((_BYTE *)v6 + 107) = v22;
    }
    if ( (*(_DWORD *)(a2 + 12) & 8) != 0 )
    {
      v22 |= 0x40u;
      *((_BYTE *)v6 + 107) = v22;
    }
    if ( (*(_DWORD *)(a2 + 12) & 0x200) != 0 )
      *((_BYTE *)v6 + 108) |= 0x80u;
    v23 = (*(_BYTE *)(a2 + 12) & 0x40) != 0 && (v22 >> 4) & (*((_BYTE *)v6 + 112) >> 1) & 1;
    v24 = *((_BYTE *)v6 + 110) | 0x40;
    if ( !v23 )
      v24 = *((_BYTE *)v6 + 110) & 0xBF;
    *((_BYTE *)v6 + 110) = v24;
    if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
      *((_BYTE *)v6 + 108) |= 8u;
    if ( (v24 & 0x40) != 0 )
    {
      v25 = *((_BYTE *)v6 + 108);
      if ( (v25 & 8) != 0 )
        *((_BYTE *)v6 + 108) = v25 & 0xF7;
    }
    if ( (*(_DWORD *)(a2 + 12) & 0x400) != 0 )
      *((_BYTE *)v6 + 109) |= 1u;
    PoFxSetComponentLatency(*v17, 0LL, -1LL);
    PoFxSetComponentResidency(*v17, 0LL, -1LL);
    if ( *((char *)v6 + 107) >= 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      v6[1228] = *(_DWORD *)(a2 + 16);
    v27 = (unsigned int)v6[1228];
    *((_QWORD *)v6 + 612) = v17;
    sub_1C004C09C(v6, v27, v26, 0LL);
    if ( byte_1C0093BE8 )
    {
      v29 = (unsigned int)v6[14];
      if ( (_DWORD)v29 != -1 && (byte_1C0093A02 & 0x10) != 0 )
      {
        v30 = (*((unsigned __int8 *)v6 + 107) >> 4) & 1;
        sub_1C0032AE8(
          v30,
          v29,
          v28,
          **((_QWORD **)v6 + 612),
          v29,
          v30,
          v6[1228],
          v11[2],
          (*((unsigned __int8 *)v6 + 110) >> 6) & 1);
      }
    }
    PoFxStartDevicePowerManagement(**((_QWORD **)v6 + 612));
    return 0LL;
  }
  PoFxUnregisterDevice(v31);
  return 3238002691LL;
}
