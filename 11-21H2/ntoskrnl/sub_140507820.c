/*
 * XREFs of sub_140507820 @ 0x140507820
 * Callers:
 *     sub_14050770C @ 0x14050770C (sub_14050770C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     sub_1403AAB1C @ 0x1403AAB1C (sub_1403AAB1C.c)
 *     sub_1403AACB4 @ 0x1403AACB4 (sub_1403AACB4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140506CA4 @ 0x140506CA4 (sub_140506CA4.c)
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 *     sub_14050745C @ 0x14050745C (sub_14050745C.c)
 *     WheaIsAltContextAllocPossible @ 0x140644C80 (WheaIsAltContextAllocPossible.c)
 */

char __fastcall sub_140507820(__int64 a1, char a2, __int64 a3)
{
  _BYTE *v6; // r15
  char v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rsi
  __int64 *v13; // rax
  void *v14; // rbp
  __int64 v15; // rdx
  int v16; // eax
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0;
  v19 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = sub_14042A5E0(a3, 378LL);
  if ( !a2 || (v10 = v8, LOBYTE(v10) = v8 & 3, (v8 & 3) != 1) && (v8 & 4) != 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( !byte_140C54998
      || (v13 = (__int64 *)sub_1403AAB1C(a3, v9), (v11 = v13) == 0LL)
      || (v12 = *v13, v6 = (_BYTE *)v13[4], v14 = (void *)(*v13 + 80), !*v13) )
    {
      v14 = &unk_140D015A0;
    }
    while ( (int)sub_1403AACB4(v10, a3) >= 0 )
    {
      while ( !sub_1402DA448((volatile signed __int32 *)&qword_140D016D0) )
        _mm_pause();
      if ( (int)sub_1405071C4(16, (__int64)v14, &v18, a1, a3) < 0 )
      {
        KeReleaseSpinLockFromDpcLevel(&qword_140D016D0);
        return v7;
      }
      if ( v12 )
      {
        v16 = v18;
        *(_DWORD *)(v12 + 12) = 0;
        *(_DWORD *)(v12 + 20) = v16;
      }
      if ( a1 )
      {
        if ( v6 )
        {
          if ( v11 )
          {
            LOBYTE(v15) = *v6;
            *((_DWORD *)v11 + 10) = 0;
            LOBYTE(v15) = v15 & 0x10;
            if ( !(unsigned __int8)WheaIsAltContextAllocPossible(a1, v15, &v19) )
              *((_DWORD *)v11 + 10) = v19;
          }
        }
      }
      dword_140C0CA28 = HIDWORD(KeGetPcr()[1].LockArray);
      sub_14050745C(v12, (__int64)v14, a3);
      if ( v11 )
        *((_DWORD *)v11 + 10) = 0;
      dword_140C0CA28 = 2048;
      sub_140506CA4((__int64)v14, a3);
      if ( qword_140D016E0 )
        LOBYTE(dword_140C4C808) = 1;
      KeReleaseSpinLockFromDpcLevel(&qword_140D016D0);
      v7 = 1;
    }
  }
  return v7;
}
