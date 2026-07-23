/*
 * XREFs of sub_140A63CE0 @ 0x140A63CE0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1404598B2 @ 0x1404598B2 (sub_1404598B2.c)
 *     sub_14052E1BC @ 0x14052E1BC (sub_14052E1BC.c)
 *     sub_14052E208 @ 0x14052E208 (sub_14052E208.c)
 *     sub_14052E568 @ 0x14052E568 (sub_14052E568.c)
 *     sub_14052E940 @ 0x14052E940 (sub_14052E940.c)
 *     sub_14052E994 @ 0x14052E994 (sub_14052E994.c)
 *     sub_14052EA24 @ 0x14052EA24 (sub_14052EA24.c)
 *     sub_14052EA40 @ 0x14052EA40 (sub_14052EA40.c)
 *     sub_14052EC78 @ 0x14052EC78 (sub_14052EC78.c)
 *     sub_14052EEFC @ 0x14052EEFC (sub_14052EEFC.c)
 *     sub_14052F1C8 @ 0x14052F1C8 (sub_14052F1C8.c)
 *     sub_14052F29C @ 0x14052F29C (sub_14052F29C.c)
 *     sub_14052F7C0 @ 0x14052F7C0 (sub_14052F7C0.c)
 *     sub_14052FAA8 @ 0x14052FAA8 (sub_14052FAA8.c)
 *     sub_140A64544 @ 0x140A64544 (sub_140A64544.c)
 *     sub_140A64748 @ 0x140A64748 (sub_140A64748.c)
 */

__int64 __fastcall sub_140A63CE0(__int64 a1, int a2, char a3)
{
  int v3; // r13d
  int v4; // eax
  char v5; // r15
  unsigned __int16 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 result; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  void *v21; // rax
  char v22; // r15
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // r8
  _QWORD *v28; // r11
  __int64 v29; // r8
  char v30; // al
  __int64 *v31; // rcx
  __int64 *v32; // r9
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // r8
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  void *v42; // rax
  unsigned int v43; // r12d
  unsigned __int64 *v44; // r13
  _QWORD *v45; // r15
  __int64 v46; // rax
  void *v47; // rax
  __int64 v48; // rcx
  int v49; // r12d
  unsigned int v50; // r13d
  unsigned int v51; // r15d
  __int64 v52; // rax
  void *v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // rbx
  __int64 v56; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v58; // ecx
  signed __int32 v59[8]; // [rsp+8h] [rbp-99h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-79h]
  __int64 v61; // [rsp+30h] [rbp-71h]
  __int64 v62; // [rsp+38h] [rbp-69h]
  char v63; // [rsp+58h] [rbp-49h]
  unsigned int v64; // [rsp+5Ch] [rbp-45h]
  int v65; // [rsp+60h] [rbp-41h]
  __int64 v66; // [rsp+68h] [rbp-39h] BYREF
  int v67; // [rsp+70h] [rbp-31h]
  unsigned int v68; // [rsp+74h] [rbp-2Dh]
  __int128 v69; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v70[2]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v71; // [rsp+98h] [rbp-9h] BYREF
  _OWORD v72[2]; // [rsp+A8h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 308);
  v64 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 312);
  v67 = v4;
  v5 = a3;
  v63 = a3;
  v68 = 0;
  v7 = 0;
  v65 = v3;
  v66 = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  memset(v72, 0, sizeof(v72));
  if ( !a2 )
  {
    result = sub_1403B38C8(a1, 0LL, 4, 8LL, &qword_140C49DB8);
    if ( (int)result < 0 )
      return result;
    v13 = *(_QWORD *)(a1 + 8);
    if ( !v13 )
    {
      v13 = sub_1403BE7F0(*(_QWORD *)a1, 544LL, 0);
      *(_QWORD *)(a1 + 8) = v13;
      if ( !v13 )
        return 3221225473LL;
    }
    *(_DWORD *)(v13 + 56) = 0x80000000;
    _InterlockedOr(v59, 0);
    sub_14052FAA8(a1, 0x4000000u, 0);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL);
    if ( v14 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) = v14;
      _InterlockedOr(v59, 0);
    }
    if ( *(_BYTE *)(a1 + 320) && (*(_DWORD *)(a1 + 224) & 0x20000000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 224LL) |= 0x80000000;
      _InterlockedOr(v59, 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 220LL) |= 3u;
      _InterlockedOr(v59, 0);
    }
    sub_14052FAA8(a1, 0x2000000u, 0);
    if ( *(_BYTE *)(a1 + 320) && *(int *)(*(_QWORD *)(a1 + 8) + 28LL) < 0 )
      sub_14052FAA8(a1, 0x80000000, 0);
    if ( !v3 )
      goto LABEL_68;
    if ( *(_BYTE *)(a1 + 319) && !*(_QWORD *)(a1 + 336) && (int)sub_14052EC78(a1) < 0 )
      return 3221225473LL;
    if ( *(_QWORD *)(a1 + 40) )
    {
LABEL_50:
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v35 = sub_14042A5E0(-1LL, 1LL);
        *(_QWORD *)(a1 + 24) = v35;
        if ( !v35 )
          return 3221225473LL;
        v36 = sub_1403BE7F0(v35, 4096LL, *(_DWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 16) = v36;
        v37 = (_QWORD *)v36;
        if ( !v36 )
          return 3221225473LL;
        v38 = v36 + 4096;
        v15 = *(_QWORD *)(a1 + 48) % 4096LL;
        v39 = ((*(_QWORD *)(a1 + 48) / 4096LL) << 12) | 1;
        while ( (unsigned __int64)v37 < v38 )
        {
          *v37 = v39;
          LOBYTE(v15) = *(_BYTE *)(a1 + 320);
          if ( !(_BYTE)v15 )
            v37[1] = 0LL;
          v40 = v37 + 1;
          if ( (_BYTE)v15 )
            v40 = v37;
          v37 = v40 + 1;
          v38 = *(_QWORD *)(a1 + 16) + 4096LL;
        }
      }
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v41 = sub_14042A5E0(-1LL, 1LL);
        if ( !v41 )
          return 3221225473LL;
        v42 = (void *)sub_1403BE7F0(v41, 4096LL, 1u);
        *(_QWORD *)(a1 + 32) = v42;
        if ( !v42 )
          return 3221225473LL;
        memset(v42, 0, 0x1000uLL);
      }
      if ( v3 == 2 && !v5 && (int)sub_140A64544(a1, v15) < 0 )
        return 3221225473LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = (*(_BYTE *)(a1 + 320) != 0 ? 0x400 : 0) | (unsigned __int64)((*(_QWORD *)(a1 + 24) / 4096LL) << 12);
      _InterlockedOr(v59, 0);
      sub_14052FAA8(a1, 0x40000000u, 1);
LABEL_68:
      v43 = 0;
      v44 = (unsigned __int64 *)&v69;
      v45 = (_QWORD *)(a1 + 112);
      do
      {
        if ( v43 != 1 || v65 && *(_BYTE *)(a1 + 320) )
        {
          v45[2] = 4096LL;
          if ( !*v45 )
          {
            v46 = sub_14042A5E0(-1LL, 1LL);
            v45[1] = v46;
            if ( !v46 )
              return 3221225473LL;
            v47 = (void *)sub_1403BE7F0(*(_QWORD *)(32LL * v43 + a1 + 120), 4096LL, 1u);
            *v45 = v47;
            if ( !v47 )
              return 3221225473LL;
            memset(v47, 0, 0x1000uLL);
          }
          *v44 = *(_DWORD *)v44 & 0xFF8 | (unsigned __int64)((v45[1] / 4096LL) << 12);
        }
        ++v43;
        v45 += 4;
        ++v44;
      }
      while ( v43 < 2 );
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
      _InterlockedOr(v59, 0);
      v48 = v69;
      if ( *(_BYTE *)(a1 + 320) )
      {
        v48 = v69 | 0x800;
        *(_QWORD *)&v69 = v69 | 0x800;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = v48;
      _InterlockedOr(v59, 0);
      v49 = v67;
      if ( v67 )
      {
        if ( v67 == 1 )
        {
          *(_QWORD *)(a1 + 288) = qword_140C49DA8;
          *(_QWORD *)(a1 + 296) = qword_140C49DB0;
        }
        v50 = v64;
        if ( !*(_QWORD *)(a1 + 288) )
        {
          v51 = (16 * v64 + 4095) & 0xFFFFF000;
          v52 = sub_14042A5E0(-1LL, v51 >> 12);
          *(_QWORD *)(a1 + 296) = v52;
          if ( !v52 )
            return 3221225473LL;
          v53 = (void *)sub_1403BE7F0(v52, v51, *(_DWORD *)(a1 + 272));
          *(_QWORD *)(a1 + 288) = v53;
          if ( !v53 )
            return 3221225473LL;
          memset(v53, 0, v51);
          *(_DWORD *)(a1 + 304) = v50;
          if ( v49 == 1 && !qword_140C49DA8 )
          {
            qword_140C49DA8 = *(_QWORD *)(a1 + 288);
            qword_140C49DB0 = *(_QWORD *)(a1 + 296);
          }
        }
        _BitScanReverse(&v54, v50);
        v55 = (*(_QWORD *)(a1 + 296) / 4096LL) << 12;
        v68 = v54;
        v56 = ((_BYTE)v54 - 1) & 0xF | (unsigned __int64)v55 | 0x800;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) = v56;
        _InterlockedOr(v59, 0);
        KeStallExecutionProcessor(0x64u);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) != v56 )
          KeBugCheckEx(0x5Cu, 0x7000uLL, 0LL, 0LL, 0LL);
        sub_14052FAA8(a1, 0x1000000u, 1);
      }
      if ( v65 )
      {
        if ( *(_BYTE *)(a1 + 320) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) = 0LL;
          _InterlockedOr(v59, 0);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
          _InterlockedOr(v59, 0);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = *((_QWORD *)&v69 + 1);
          _InterlockedOr(v59, 0);
        }
        sub_14052EEFC(a1);
      }
      if ( !*(_QWORD *)(a1 + 184) )
      {
        PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 176));
        v58 = *(_DWORD *)(a1 + 200);
        *(PHYSICAL_ADDRESS *)(a1 + 184) = PhysicalAddress;
        *(_QWORD *)(a1 + 200) = v58 & 3 | PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFFCuLL;
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 192) & 0xFFFFFFFFFFFFFF90uLL | 0x65;
      }
      v11 = 0x4000000;
      goto LABEL_100;
    }
    v16 = sub_14042A5E0(-1LL, 1LL);
    *(_QWORD *)(a1 + 48) = v16;
    if ( !v16 )
      return 3221225473LL;
    v17 = sub_1403BE7F0(v16, 4096LL, *(_DWORD *)(a1 + 272));
    *(_QWORD *)(a1 + 40) = v17;
    if ( !v17 )
      return 3221225473LL;
    if ( !qword_140D017D8 )
    {
      v20 = sub_14042A5E0(-1LL, 1LL);
      qword_140C49DA0 = v20;
      if ( !v20 )
        return 3221225473LL;
      v21 = (void *)sub_1403BE7F0(v20, 4096LL, *(_DWORD *)(a1 + 272));
      qword_140D017D8 = (__int64)v21;
      if ( !v21 )
        return 3221225473LL;
      memset(v21, 0, 0x1000uLL);
    }
    v22 = 0;
    if ( v3 == 1 )
    {
      if ( *(_BYTE *)(a1 + 319) )
      {
        v22 = 1;
        v23 = sub_14052EA24(a1, &v66);
LABEL_36:
        v7 = v23;
      }
    }
    else if ( v3 == 2 )
    {
      v22 = 1;
      v23 = sub_14052E940(a1, 0LL, (unsigned __int64 *)&v66);
      goto LABEL_36;
    }
    if ( *(_BYTE *)(a1 + 320) )
    {
      sub_14052EA40(v19, 0, v22);
      result = sub_140A64748(a1);
      if ( (int)result < 0 )
        return result;
      sub_14052E208(v24, *(_QWORD *)(a1 + 104), 0, v25, BugCheckParameter4, (__int64 *)v72);
      v27 = *(_QWORD **)(a1 + 40);
      v28 = v27 + 512;
      while ( v27 < v28 )
      {
        sub_14052F7C0(v26, v72, v27);
        v27 = (_QWORD *)(v29 + 32);
      }
    }
    else
    {
      v30 = sub_14052E994(v19, v18, v22);
      sub_14052E1BC(a1, v30, v7, v66, (__int64 *)&v71);
      v31 = *(__int64 **)(a1 + 40);
      v32 = v31 + 512;
      if ( v31 < v31 + 512 )
      {
        v33 = *((_QWORD *)&v71 + 1);
        v15 = v71;
        v34 = v71 & 1;
        do
        {
          if ( v34 )
          {
            v31[1] = v33;
            *v31 = v15;
          }
          else
          {
            *v31 = 0LL;
            v31[1] = 0LL;
          }
          v31 += 2;
        }
        while ( v31 < v32 );
      }
    }
    v5 = v63;
    goto LABEL_50;
  }
  if ( a2 != 1 )
    return 3221225473LL;
  if ( v4 )
  {
    sub_1404598B2(a1, 0LL);
    sub_14052FAA8(a1, 0x2000000u, 1);
  }
  if ( !v3 )
    return 0LL;
  sub_14052F1C8(a1);
  if ( *(_BYTE *)(a1 + 320) )
    sub_14052F29C(a1, 0xFFFFu, v9, v10, 0, 0, 0);
  v70[1] = v70;
  v70[0] = v70;
  sub_14052E568(a1, v8, 0LL, 1, BugCheckParameter4, v61, v62, 0, 0LL);
  v11 = 0x80000000;
LABEL_100:
  sub_14052FAA8(a1, v11, 1);
  return 0LL;
}
