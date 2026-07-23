/*
 * XREFs of ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0
 * Callers:
 *     sub_140431640 @ 0x140431640 (sub_140431640.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14051CD90 @ 0x14051CD90 (sub_14051CD90.c)
 *     sub_14057C248 @ 0x14057C248 (sub_14057C248.c)
 *     WheaRecoveryBugCheck @ 0x1406435C0 (WheaRecoveryBugCheck.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 *     sub_140644BE4 @ 0x140644BE4 (sub_140644BE4.c)
 *     WheaProcessWaitingETWEvents @ 0x140645F50 (WheaProcessWaitingETWEvents.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_140A08E84 @ 0x140A08E84 (sub_140A08E84.c)
 */

void __fastcall CPullPin::Process(CPullPin *this)
{
  __int64 v1; // r14
  unsigned __int64 v2; // rbx
  char v3; // r12
  __int64 v4; // rdi
  int v6; // esi
  __int64 CurrentIrql; // r15
  unsigned int v8; // r10d
  unsigned int *v9; // rdx
  unsigned int *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-48h] BYREF
  _DWORD Src[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h]
  int v25; // [rsp+40h] [rbp-30h]
  int v26; // [rsp+44h] [rbp-2Ch]
  int v27; // [rsp+48h] [rbp-28h]
  int v28; // [rsp+4Ch] [rbp-24h]
  int v29; // [rsp+50h] [rbp-20h]
  unsigned __int64 v30; // [rsp+54h] [rbp-1Ch]
  int v31; // [rsp+5Ch] [rbp-14h]
  char v32; // [rsp+60h] [rbp-10h]

  v1 = *((_QWORD *)this + 1);
  v2 = 0LL;
  v3 = *(_BYTE *)this & 0x10;
  v4 = 0LL;
  v6 = -1073741637;
  CurrentIrql = KeGetCurrentIrql();
  v8 = *(unsigned __int16 *)(v1 + 10);
  v9 = (unsigned int *)(v1 + 128);
  v21 = CurrentIrql;
  v10 = (unsigned int *)(v1 + 128);
  v11 = 0LL;
  if ( (_WORD)v8 )
  {
    while ( 1 )
    {
      v12 = *((_QWORD *)v10 + 2) - 0x455742F98A1E1D01LL;
      if ( *((_QWORD *)v10 + 2) == 0x455742F98A1E1D01LL )
        v12 = *((_QWORD *)v10 + 3) + 0x17083CA3A1A9CC64LL;
      if ( !v12 )
        break;
      v10 += 18;
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v8 )
        goto LABEL_32;
    }
    v13 = v1 + *v10;
    v14 = 0;
    while ( 1 )
    {
      v15 = *((_QWORD *)v9 + 2) - 0x4C5202C3C34832A1LL;
      if ( *((_QWORD *)v9 + 2) == 0x4C5202C3C34832A1LL )
        v15 = *((_QWORD *)v9 + 3) + 0x3DC88A2E2600E57LL;
      if ( !v15 )
        break;
      v9 += 18;
      if ( ++v14 >= v8 )
        goto LABEL_15;
    }
    v4 = v1 + *v9;
LABEL_15:
    v2 = *(_QWORD *)(v13 + 48);
    if ( (*(_DWORD *)this & 4) != 0 )
    {
      if ( v4 )
        *(_DWORD *)(v4 + 1) |= 8u;
      if ( (_BYTE)CurrentIrql )
      {
        if ( byte_140C54EE8 )
        {
          v16 = 0;
          while ( _InterlockedCompareExchange(&dword_140D04590[12 * v16], 1, 0) )
          {
            if ( ++v16 >= 0x10u )
            {
              v6 = -1073741670;
              goto LABEL_32;
            }
          }
          CurrentIrql = 6LL * v16;
          *(_OWORD *)((char *)&unk_140D04580 + 48 * v16 + 24) = *(_OWORD *)this;
          _InterlockedAdd((volatile signed __int32 *)&unk_140D04580 + 12 * v16 + 4, 1u);
          sub_14057C248((PLIST_ENTRY)&unk_140D04580 + 3 * v16);
          v17 = 0;
          while ( *((int *)&unk_140D04580 + 2 * CurrentIrql + 4) > 1 )
          {
            KeStallExecutionProcessor(0x32u);
            v17 += 50;
            if ( v17 >= 0x1E8480 )
            {
              *((_DWORD *)&unk_140D04580 + 2 * CurrentIrql + 10) = 258;
              break;
            }
          }
          v6 = *((_DWORD *)&unk_140D04580 + 2 * CurrentIrql + 10);
          _InterlockedExchange((volatile __int32 *)&unk_140D04580 + 2 * CurrentIrql + 4, 0);
          LOBYTE(CurrentIrql) = v21;
          if ( !v6 && (unsigned __int8)v21 >= 2u )
            v6 = -1073741595;
        }
      }
      else
      {
        LOBYTE(v11) = v3;
        v6 = WheaAttemptPhysicalPageOffline(v2 >> 12, 0LL, 1LL, v11);
      }
    }
  }
LABEL_32:
  Src[0] = 1733060695;
  Src[1] = 1;
  v29 = *(_DWORD *)this;
  v24 = 49LL;
  v26 = -2147483595;
  v25 = 1280201291;
  v27 = 2;
  v28 = 17;
  v30 = v2;
  v31 = v6;
  v32 = v3;
  WheaLogInternalEvent(Src);
  if ( v4 )
  {
    *(_BYTE *)(v4 + 13) = CurrentIrql;
    v22 = v4 + 19;
    LODWORD(v21) = 20;
    sub_140644BE4(&v22, &v21);
  }
  if ( v6 == 259 && (*(_DWORD *)this & 8) != 0 && !v3 )
  {
    if ( v4 )
      *(_DWORD *)(v4 + 1) |= 2u;
    sub_140A08E84();
  }
  *(_DWORD *)(v1 + 104) &= ~0x80u;
  if ( !v6 )
    goto LABEL_55;
  if ( v3 )
  {
    v18 = sub_14051CD90(v1);
    if ( v18 )
    {
      v19 = sub_140643F2C(&unk_140CE1A98, *(unsigned int *)(v18 + 24));
      v20 = (v19 + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v19 >> 64);
    }
    else
    {
      v20 = 0LL;
    }
    if ( v4 )
    {
      *(_BYTE *)(v4 + 14) = 0;
      switch ( v6 )
      {
        case 258:
          *(_DWORD *)(v4 + 15) = 2;
          break;
        case -1073741670:
          *(_DWORD *)(v4 + 15) = 11;
          break;
        case 259:
          *(_DWORD *)(v4 + 15) = 1;
          break;
        default:
          *(_DWORD *)(v4 + 15) = 16 - (v6 != -1073741595);
          break;
      }
    }
    *(_DWORD *)(v1 + 104) &= ~1u;
    *(_DWORD *)(v1 + 12) = 1;
    WheaRecoveryBugCheck(v1, v20, 0LL);
  }
  if ( v6 >= 0 )
LABEL_55:
    WheaProcessWaitingETWEvents();
}
