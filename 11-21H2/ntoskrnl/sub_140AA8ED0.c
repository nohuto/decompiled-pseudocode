/*
 * XREFs of sub_140AA8ED0 @ 0x140AA8ED0
 * Callers:
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 *     sub_140AA9A28 @ 0x140AA9A28 (sub_140AA9A28.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strcmp @ 0x1403E2AE0 (strcmp.c)
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406543F8 @ 0x1406543F8 (sub_1406543F8.c)
 *     sub_1406545B0 @ 0x1406545B0 (sub_1406545B0.c)
 *     sub_140AA8B28 @ 0x140AA8B28 (sub_140AA8B28.c)
 *     sub_140AA8D9C @ 0x140AA8D9C (sub_140AA8D9C.c)
 *     sub_140AA9594 @ 0x140AA9594 (sub_140AA9594.c)
 *     sub_140AA9660 @ 0x140AA9660 (sub_140AA9660.c)
 *     sub_140AA9C94 @ 0x140AA9C94 (sub_140AA9C94.c)
 *     sub_140AAA04C @ 0x140AAA04C (sub_140AAA04C.c)
 *     sub_140AAA178 @ 0x140AAA178 (sub_140AAA178.c)
 *     sub_140AAA2B0 @ 0x140AAA2B0 (sub_140AAA2B0.c)
 *     sub_140AAA374 @ 0x140AAA374 (sub_140AAA374.c)
 *     sub_140AAA418 @ 0x140AAA418 (sub_140AAA418.c)
 *     sub_140AAA44C @ 0x140AAA44C (sub_140AAA44C.c)
 */

__int64 __fastcall sub_140AA8ED0(KSPIN_LOCK *a1, int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  int v9; // edi
  char v10; // bp
  KIRQL v11; // r13
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r8
  int v22; // eax
  PKSPIN_LOCK v23; // rcx
  unsigned int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  PKSPIN_LOCK v27; // rax
  unsigned int v28; // eax
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  const char *v35; // r8
  int v36; // eax
  __int64 v37; // r9
  char *v38; // rcx
  char v39; // al
  char DstBuf[80]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  v9 = (int)a1;
  if ( (_DWORD)a1 == 17 )
    goto LABEL_145;
  v10 = 1;
  switch ( (_DWORD)a1 )
  {
    case 0xE:
      goto LABEL_72;
    case 0x14:
      goto LABEL_67;
    case 0xF:
LABEL_72:
      if ( v9 <= 11 )
      {
        if ( v9 != 11 )
        {
          if ( v9 != 1 )
          {
            if ( v9 != 2 )
            {
              if ( v9 == 3 )
              {
                if ( a2 )
                {
                  if ( (qword_140D01468[6] & 1) != 0 )
                    sub_140AAA178(a2);
                  goto LABEL_144;
                }
                goto LABEL_143;
              }
              if ( (unsigned int)(v9 - 4) <= 6 )
              {
                if ( (qword_140D01468[6] & 1) != 0 )
                {
                  v29 = v9 - 4;
                  if ( !v29 )
                  {
                    v38 = "\x1B[2J";
                    goto LABEL_98;
                  }
                  v30 = v29 - 1;
                  if ( !v30 )
                  {
                    v38 = "\x1B[0J";
                    goto LABEL_98;
                  }
                  v31 = v30 - 1;
                  if ( !v31 )
                  {
                    v38 = "\x1B[0K";
                    goto LABEL_98;
                  }
                  v32 = v31 - 1;
                  if ( !v32 )
                  {
                    v38 = "\x1B[0m";
                    goto LABEL_98;
                  }
                  v33 = v32 - 1;
                  if ( !v33 )
                  {
                    v38 = "\x1B[7m";
                    goto LABEL_98;
                  }
                  v34 = v33 - 1;
                  if ( v34 )
                  {
                    if ( v34 == 1 && a2 && a3 == 8 )
                    {
                      v35 = "\x1B[%d;%dH";
                      v36 = *a2 + 1;
                      v37 = (unsigned int)(a2[1] + 1);
LABEL_92:
                      sprintf_s(DstBuf, 0x50uLL, v35, v37, v36);
                      v38 = DstBuf;
LABEL_98:
                      sub_140AAA418(v38);
                      goto LABEL_144;
                    }
                  }
                  else if ( a2 && a3 == 8 )
                  {
                    v36 = *a2;
                    v35 = "\x1B[%d;%dm";
                    v37 = (unsigned int)a2[1];
                    goto LABEL_92;
                  }
LABEL_143:
                  v5 = -1073741811;
                }
LABEL_144:
                *((_DWORD *)qword_140D01468 + 12) &= ~0x40u;
                return v5;
              }
              goto LABEL_125;
            }
            if ( !a4 || !a5 || *a5 != 1LL )
              goto LABEL_143;
            if ( (qword_140D01468[6] & 1) != 0 )
            {
              if ( (unsigned __int8)sub_140AA9660(DstBuf, 0x50uLL) )
              {
                if ( strcmp(DstBuf, "reboot") && strcmp(DstBuf, "shutdown") )
                  v10 = 0;
                *(_BYTE *)a4 = v10;
              }
              goto LABEL_144;
            }
LABEL_142:
            *(_BYTE *)a4 = 0;
            goto LABEL_144;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_143;
          LOBYTE(a1) = *(_BYTE *)a2;
          v28 = sub_140AA9594(a1);
LABEL_63:
          v5 = v28;
          goto LABEL_144;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_143;
        if ( (qword_140D01468[6] & 1) != 0 )
        {
          v39 = sub_1406545B0(*((_DWORD *)qword_140D01468 + 14));
LABEL_120:
          *(_BYTE *)a4 = v39;
          goto LABEL_144;
        }
LABEL_119:
        v39 = 0;
        goto LABEL_120;
      }
      if ( v9 == 12 )
      {
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_143;
        if ( (qword_140D01468[6] & 1) != 0 && sub_1406545B0(*((_DWORD *)qword_140D01468 + 14)) )
        {
          sub_1406543F8(*((_DWORD *)qword_140D01468 + 14), (_BYTE *)a4);
          goto LABEL_144;
        }
        goto LABEL_142;
      }
      if ( v9 == 13 )
      {
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_143;
        if ( (qword_140D01468[6] & 1) != 0 )
        {
          v39 = sub_140AA9660((void *)(a4 + 1), *a5 - 1LL);
          goto LABEL_120;
        }
        goto LABEL_119;
      }
      if ( v9 != 14 )
      {
        if ( v9 == 15 )
        {
          if ( (qword_140D01468[6] & 1) != 0 )
            sub_140AA8D9C();
          return v5;
        }
        goto LABEL_125;
      }
      *((_DWORD *)qword_140D01468 + 12) = qword_140D01468[6] & 0xFFFFFFBD | 2;
      return v5;
  }
  if ( (qword_140D01468[6] & 2) != 0 )
    v11 = -1;
  else
    v11 = KeAcquireSpinLockRaiseToDpc(qword_140D01468);
  a1 = qword_140D01468;
  v12 = *((_DWORD *)qword_140D01468 + 12);
  if ( (v12 & 0x40) == 0 )
  {
    *((_DWORD *)qword_140D01468 + 12) = v12 | 0x40;
    if ( v11 != 0xFF )
    {
      KeReleaseSpinLockFromDpcLevel(a1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a1 = (KSPIN_LOCK *)((unsigned int)v11 + 1);
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v17 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v17 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    if ( v9 <= 16 )
    {
      if ( v9 == 16 )
      {
        if ( a4 && a5 && *a5 >= 0x20uLL )
        {
          v23 = qword_140D01468;
          *(_DWORD *)a4 = 1;
          *(_BYTE *)(a4 + 8) = 1;
          *(_BYTE *)(a4 + 9) = (v23[6] & 8) != 0;
          *(_DWORD *)(a4 + 24) = *((_DWORD *)v23 + 13);
          v24 = *((_DWORD *)v23 + 12);
          v25 = (v24 >> 9) & 7;
          if ( v25 || (v24 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = v25;
            *(_QWORD *)(a4 + 16) = v23[8];
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 0;
            *(_QWORD *)(a4 + 16) = 0LL;
          }
          *(_BYTE *)(a4 + 28) = *((_BYTE *)v23 + 84);
          goto LABEL_144;
        }
        goto LABEL_143;
      }
      goto LABEL_72;
    }
    if ( v9 != 17 )
    {
      v26 = (unsigned int)(v9 - 18);
      if ( v9 == 18 )
      {
        if ( !a2 || a3 != 1 )
          goto LABEL_143;
        LOBYTE(v26) = *(_BYTE *)a2;
        sub_140AA9C94(v26);
        goto LABEL_144;
      }
      if ( v9 == 19 )
      {
        if ( a2 )
        {
          v28 = sub_140AAA44C(a2, a3);
          goto LABEL_63;
        }
        return 3221225485LL;
      }
      if ( v9 != 20 )
      {
        switch ( v9 )
        {
          case 21:
            if ( !a4 || !a5 || *a5 < 0x10uLL )
              goto LABEL_143;
            *(_OWORD *)a4 = *(_OWORD *)((char *)qword_140D01468 + 100);
            goto LABEL_144;
          case 22:
            if ( a2 && a3 )
            {
              if ( (qword_140D01468[6] & 1) != 0 )
                sub_140AAA04C(a2, a3);
              goto LABEL_144;
            }
            goto LABEL_143;
          case 23:
            if ( a2 )
            {
              if ( (qword_140D01468[6] & 1) != 0 )
                sub_140AAA2B0(a2);
              goto LABEL_144;
            }
            goto LABEL_143;
          case 24:
            if ( !a4 || !a5 || *a5 < 0xCuLL )
              goto LABEL_143;
            v27 = qword_140D01468;
            *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)qword_140D01468 + 118);
            *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v27 + 126);
            goto LABEL_144;
        }
LABEL_125:
        v5 = -1073741811;
        if ( v9 == 17 || v9 == 20 )
          return v5;
        goto LABEL_144;
      }
LABEL_67:
      if ( (qword_140D01468[6] & 3) != 3 )
        return v5;
      if ( a2 && a3 == 4 )
      {
        sub_140AAA374((unsigned int)*a2);
        sub_140AAA418("\n\r!SAC>");
        return v5;
      }
      return 3221225485LL;
    }
LABEL_145:
    if ( a2 )
      sub_140AA8B28(a2);
    else
      return (unsigned int)-1073741811;
    return v5;
  }
  if ( v11 != 0xFF )
  {
    KeReleaseSpinLockFromDpcLevel(qword_140D01468);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && v11 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v16 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C((__int64)v14);
        }
      }
    }
    __writecr8(v11);
  }
  return 3221225473LL;
}
