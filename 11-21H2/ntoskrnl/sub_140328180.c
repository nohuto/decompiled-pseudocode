/*
 * XREFs of sub_140328180 @ 0x140328180
 * Callers:
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     sub_140706164 @ 0x140706164 (sub_140706164.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     CcMapData @ 0x1407BDE60 (CcMapData.c)
 *     sub_1407BDF60 @ 0x1407BDF60 (sub_1407BDF60.c)
 * Callees:
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1403A3B9C @ 0x1403A3B9C (sub_1403A3B9C.c)
 *     sub_1403A5298 @ 0x1403A5298 (sub_1403A5298.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053AF8C @ 0x14053AF8C (sub_14053AF8C.c)
 */

__int64 __fastcall sub_140328180(__int64 a1, __int64 a2, __int64 **a3, _DWORD *a4, int a5, int a6)
{
  __int64 v6; // r15
  int v7; // r12d
  unsigned int v9; // r13d
  __int64 v11; // rdi
  bool v12; // zf
  int v13; // eax
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  int v18; // edx
  int v19; // ecx
  int v20; // r10d
  __int64 *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // bp
  unsigned int v26; // r8d
  __int64 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r12
  KIRQL v30; // si
  BOOL v31; // [rsp+30h] [rbp-58h]
  __int64 v32[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v33; // [rsp+90h] [rbp+8h] BYREF
  int v34; // [rsp+98h] [rbp+10h]
  __int64 **v35; // [rsp+A0h] [rbp+18h]
  _DWORD *v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = *(_QWORD *)(a1 + 528);
  v7 = 0;
  LODWORD(v33) = 0;
  v9 = a2 & 0x3FFFF;
  v11 = a2 - (a2 & 0x3FFFF);
  v12 = (*(_DWORD *)(a1 + 152) & 0x200) == 0;
  v13 = *(_DWORD *)(a1 + 152) & 0x200;
  v32[0] = v11;
  v31 = !v12;
  if ( (v13 & 0x200) != 0 || a5 )
  {
    v14 = 1;
    v34 = 1;
    if ( (unsigned int)dword_140C49AB8 >= 0x80 || *(_DWORD *)(v6 + 1184) >= 0x80u )
      goto LABEL_3;
  }
  else
  {
    v14 = 0;
    v34 = 0;
    if ( (unsigned int)dword_140C49AB8 >= 0x80 )
      goto LABEL_3;
  }
  v28 = sub_1403A5298();
  v29 = v28;
  if ( v28 )
  {
    if ( v14 == 1 )
      sub_14053AF8C(v6, v28);
    v30 = KeAcquireQueuedSpinLock(4uLL);
    sub_1403A3B9C(v6, v29);
    KeReleaseQueuedSpinLock(4uLL, v30);
  }
  v7 = v33;
LABEL_3:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x566uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (v11 & 0xFFFFF) != 0
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || v11 < 0x100000
    || v11 == *(_QWORD *)(a1 + 336) )
  {
    v7 = 1;
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 88);
  if ( v15 <= 0x2000000 )
  {
    v21 = *(__int64 **)(v16 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  else
  {
    v17 = a2;
    v18 = 0;
    v19 = 25;
    do
    {
      v20 = v19;
      v19 += 7;
      ++v18;
    }
    while ( v15 > 1LL << v19 );
    v21 = *(__int64 **)(v16 + 8 * (a2 >> v20));
    if ( !v21 )
      goto LABEL_29;
    do
    {
      if ( !v18 )
        break;
      v22 = 1LL << v20;
      v20 -= 7;
      v17 &= v22 - 1;
      --v18;
      v21 = (__int64 *)v21[v17 >> v20];
    }
    while ( v21 );
  }
  if ( v21 )
  {
    v23 = v21[1];
    v24 = _InterlockedIncrement((volatile signed __int32 *)v21 + 4);
    if ( !v24 )
      KeBugCheckEx(0x34u, 0xAB9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v24 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 544));
    ExReleasePushLockEx(a1 + 104, 0LL);
    v11 = v32[0];
    goto LABEL_22;
  }
LABEL_29:
  ExReleasePushLockEx(a1 + 104, 0LL);
  v21 = sub_1402858A0(a1, a2, v31, v34);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 512 && (v11 & 0xFFFFF) == 0 && v11 >= 0x100000 )
  {
    v11 -= 0x100000LL;
    v32[0] = v11;
    sub_1402853B0(a1, v32, 0x100000u, 1, 0, 0);
  }
LABEL_22:
  if ( !v7 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v11 >= 8650752 )
      {
        v32[0] = v11 - 0x800000;
        sub_1402853B0(a1, v32, 0x800000u, 1, 0, 0);
        goto LABEL_23;
      }
      v33 = 0x40000LL;
    }
    else
    {
      v26 = dword_140C097A8;
      if ( v11 >= (unsigned int)dword_140C097A8 )
      {
        v27 = v32;
        v32[0] = v11 - (unsigned int)dword_140C097A8;
LABEL_35:
        sub_1402853B0(a1, v27, v26, 1, 0, 0);
        goto LABEL_23;
      }
      v33 = 0LL;
    }
    v27 = &v33;
    v26 = v11;
    goto LABEL_35;
  }
LABEL_23:
  *v35 = v21;
  *v36 = 0x40000 - v9;
  return v9 + *v21;
}
