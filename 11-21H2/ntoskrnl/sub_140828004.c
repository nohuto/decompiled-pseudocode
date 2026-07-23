/*
 * XREFs of sub_140828004 @ 0x140828004
 * Callers:
 *     sub_140827FE8 @ 0x140827FE8 (sub_140827FE8.c)
 *     sub_14084F7E4 @ 0x14084F7E4 (sub_14084F7E4.c)
 *     sub_140B01800 @ 0x140B01800 (sub_140B01800.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     sub_140828134 @ 0x140828134 (sub_140828134.c)
 *     sub_1408281D8 @ 0x1408281D8 (sub_1408281D8.c)
 *     sub_140A31C78 @ 0x140A31C78 (sub_140A31C78.c)
 */

__int64 __fastcall sub_140828004(char *CallbackContext, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  void *v7; // rbx
  int v8; // esi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rcx
  char v14; // al

  v3 = a2;
  LOBYTE(a2) = 1;
  v6 = sub_1408281D8(0LL, a2);
  v7 = (void *)v6;
  if ( !v6 )
    return sub_1406D2264(CallbackContext, v3, a3);
  *(_QWORD *)(v6 + 328) = v3;
  *(_QWORD *)(v6 + 336) = a3;
  *(_QWORD *)(v6 + 344) = CallbackContext;
  *(_BYTE *)(v6 + 373) = 0;
  *(_DWORD *)(v6 + 368) = sub_140828134(v6);
  v8 = sub_1406D2264(CallbackContext, (__int64)sub_14085D310, (__int64)v7);
  if ( v8 < 0 )
  {
    *((_QWORD *)CallbackContext + 5) = 0LL;
    sub_140A31C78(v7);
    return (unsigned int)v8;
  }
  else
  {
    v9 = sub_140347C10((__int64)&qword_140CE21E0, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140CE21E0, 0LL);
    v11 = v9;
    if ( v10 )
      sub_14029F120(&qword_140CE21E0, v9, (__int64)&qword_140CE21E0);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    v12 = qword_140D010B8;
    if ( !qword_140D010B8 )
    {
      sub_1406D2264((char *)&dword_140C06890, (__int64)sub_1408654C0, 0LL);
      v12 = qword_140D010B8;
    }
    v13 = &qword_140D010B8;
    while ( v12 )
    {
      if ( *(char **)(v12 + 344) == CallbackContext )
        goto LABEL_14;
      v13 = (__int64 *)(v12 + 352);
      v12 = *(_QWORD *)(v12 + 352);
    }
    *v13 = (__int64)v7;
LABEL_14:
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CE21E0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140CE21E0);
    sub_1402AFC00((ULONG_PTR)&qword_140CE21E0);
    return 0LL;
  }
}
