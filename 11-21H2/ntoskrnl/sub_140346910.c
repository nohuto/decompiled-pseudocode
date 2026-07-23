/*
 * XREFs of sub_140346910 @ 0x140346910
 * Callers:
 *     sub_1407C05A0 @ 0x1407C05A0 (sub_1407C05A0.c)
 * Callees:
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407C04B4 @ 0x1407C04B4 (sub_1407C04B4.c)
 *     sub_1407C0568 @ 0x1407C0568 (sub_1407C0568.c)
 *     sub_1407C05CC @ 0x1407C05CC (sub_1407C05CC.c)
 *     sub_140916454 @ 0x140916454 (sub_140916454.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_140346910(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  UNICODE_STRING *p_UnicodeString; // r14
  char v10; // r12
  char v11; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r8d
  int v14; // eax
  int v15; // esi
  wchar_t *Buffer; // r10
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  char v22; // [rsp+31h] [rbp-117h]
  int v24; // [rsp+50h] [rbp-F8h]
  _QWORD v25[2]; // [rsp+58h] [rbp-F0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+78h] [rbp-D0h]
  __int64 v28; // [rsp+80h] [rbp-C8h]
  __int128 v29; // [rsp+88h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-A0h]
  __int128 v32; // [rsp+B8h] [rbp-90h]
  __int64 v33; // [rsp+C8h] [rbp-80h]
  _BYTE v34[48]; // [rsp+D0h] [rbp-78h] BYREF

  v27 = a3;
  v7 = a1;
  v24 = a1;
  v28 = a1;
  v29 = 0LL;
  UnicodeString = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  p_UnicodeString = 0LL;
  v10 = 0;
  v22 = 0;
  v11 = 0;
  memset(v34, 0, sizeof(v34));
  sub_140347770(&v29);
  v25[1] = v25;
  v25[0] = v25;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( dword_140C54CA8 && !sub_1402ACD00() )
  {
    *(_QWORD *)&v30 = v7;
    *((_QWORD *)&v30 + 1) = a3;
    LODWORD(v31) = a4;
    *((_QWORD *)&v31 + 1) = a5;
    v14 = sub_1407C0568(47, (unsigned int)&v30, v13, 48, v7, (__int64)v25);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740541 )
        v15 = 0;
      goto LABEL_19;
    }
    v22 = 1;
  }
  sub_140AB4550(v34);
  v11 = 1;
  sub_140AB4370();
  v8 = *(_QWORD *)(v7 + 8);
  if ( (v8 & 1) != 0 )
  {
    v8 ^= 1uLL;
  }
  else if ( (*(_DWORD *)(v7 + 48) & 2) == 0 )
  {
    sub_140AB42D0(v8);
    v10 = 1;
  }
  v15 = sub_140AB43C0(v7, 0LL);
  if ( v15 >= 0 )
  {
    if ( byte_140C097BD && (*(_DWORD *)(v8 + 184) & 0x1000000) != 0 )
    {
      if ( (int)sub_140916454(v8, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)sub_1407C05CC(v8);
    }
    if ( p_UnicodeString )
    {
      if ( v10 )
      {
        sub_140AB4300(v8);
        v10 = 0;
      }
      sub_140AB4260();
      sub_140AB4580(v34);
      v11 = 0;
      if ( a4 <= 0x10 )
      {
        *a5 = p_UnicodeString->Length + 18;
        v15 = -1073741820;
      }
      else
      {
        Buffer = p_UnicodeString->Buffer;
        v17 = p_UnicodeString->Length + 2;
        *a5 = p_UnicodeString->Length + 18;
        if ( v17 <= (unsigned __int64)a4 - 16 )
        {
          v15 = 0;
LABEL_18:
          v18 = v17 - 2;
          memmove((void *)(a3 + 16), Buffer, v18);
          v19 = v27;
          v20 = v27 + 16;
          *(_WORD *)(v20 + 2 * ((unsigned __int64)v18 >> 1)) = 0;
          *(_WORD *)v19 = v18;
          *(_WORD *)(v19 + 2) = v18;
          *(_QWORD *)(v19 + 8) = v20;
          LODWORD(v7) = v24;
          goto LABEL_19;
        }
        v17 = a4 - 16;
        v15 = -1073741820;
        if ( a4 - 16 >= 2 )
          goto LABEL_18;
        LODWORD(v7) = v24;
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_19:
  if ( v10 )
    sub_140AB4300(v8);
  if ( v11 )
  {
    sub_140AB4260();
    sub_140AB4580(v34);
  }
  if ( v22 )
    sub_1407C04B4(48, v7, v15, (unsigned int)&v30, (__int64)v25);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( UnicodeString.Buffer )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  *((_QWORD *)KeGetCurrentThread() + 284) = v29;
  return (unsigned int)v15;
}
