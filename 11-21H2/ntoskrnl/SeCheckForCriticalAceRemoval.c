/*
 * XREFs of SeCheckForCriticalAceRemoval @ 0x1406785F0
 * Callers:
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 * Callees:
 *     sub_140207028 @ 0x140207028 (sub_140207028.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 */

char __fastcall SeCheckForCriticalAceRemoval(void *a1, void *a2, __int64 *a3, _BYTE *a4)
{
  int v5; // eax
  __int64 CurrentThreadProcess; // rax
  int v7; // r8d
  __int64 v8; // rdx
  char v10; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v11[15]; // [rsp+31h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  __int64 v16; // [rsp+70h] [rbp+27h]
  _DWORD v17[2]; // [rsp+78h] [rbp+2Fh] BYREF

  *(_QWORD *)&v11[7] = 0LL;
  v10 = 0;
  v11[0] = 0;
  LOBYTE(v5) = (unsigned __int8)sub_140207028(a1, a2, a3, &v10, v11);
  if ( v10 )
  {
    if ( !v11[0] )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      v5 = sub_1407B66E0(CurrentThreadProcess, &v11[7]);
      if ( v5 >= 0 && (unsigned int)dword_140C04350 > 5 )
      {
        LOBYTE(v5) = sub_1402A2000((__int64)&dword_140C04350, 0x200000000000LL);
        if ( (_BYTE)v5 )
        {
          v7 = (unsigned __int16)**(_WORD **)&v11[7];
          v8 = *(_QWORD *)(*(_QWORD *)&v11[7] + 8LL);
          v15 = 0;
          v17[1] = 0;
          v13 = v17;
          v16 = v8;
          v17[0] = v7;
          v14 = 2;
          LOBYTE(v5) = sub_14020A9C4((__int64)&dword_140C04350, (unsigned __int8 *)&dword_1400342B4, 0LL, 0LL, 4u, &v12);
        }
      }
    }
  }
  *a4 = 0;
  return v5;
}
