/*
 * XREFs of sub_1406BC9D0 @ 0x1406BC9D0
 * Callers:
 *     sub_140424C80 @ 0x140424C80 (sub_140424C80.c)
 *     sub_140659774 @ 0x140659774 (sub_140659774.c)
 * Callees:
 *     sub_140241C40 @ 0x140241C40 (sub_140241C40.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406BCB10 @ 0x1406BCB10 (sub_1406BCB10.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1409E7A80 @ 0x1409E7A80 (sub_1409E7A80.c)
 */

__int64 sub_1406BC9D0()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // r14
  int v2; // esi
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // al
  __int64 result; // rax
  int v8; // esi
  int v9; // edi
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+2Ch] [rbp-14h]
  struct _KTHREAD *v13; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+38h] [rbp-8h]
  int v15; // [rsp+3Ch] [rbp-4h]
  char v16; // [rsp+60h] [rbp+20h] BYREF

  v12 = 0;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  if ( !*((_BYTE *)CurrentThread + 562) )
    return 3221225485LL;
  if ( (*((_DWORD *)CurrentThread + 30) & 0x80u) != 0 )
    return 1073741851LL;
  v1 = *((_QWORD *)CurrentThread + 23);
  v2 = *(_DWORD *)(v1 + 2512);
  if ( (v2 & 0x1000) != 0 || (*(_DWORD *)(v1 + 2512) & 0x2000) != 0 )
  {
    sub_1409E7A80((unsigned int)((v2 & 0x1000) != 0) + 1, *((_QWORD *)CurrentThread + 23));
    if ( (v2 & 0x1000) != 0 )
      return 3221225506LL;
  }
  v3 = 1;
  v10 = v1;
  v11 = 1;
  if ( (int)sub_1406BCB10(v1, &v16) >= 0 )
  {
    v6 = qword_140C1B8E0;
    if ( qword_140C1B8E0 )
    {
      LOBYTE(v5) = v16;
      LOBYTE(v4) = 12;
      v6 = sub_14042A5E0(v5, v4);
      v3 = v11;
    }
    v11 = ((unsigned __int8)v3 ^ (unsigned __int8)(2 * v6)) & 2 ^ v3;
  }
  result = sub_1406F83A0(0LL, &v10, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 30, 7u);
    v8 = v2 & 0xC000;
    if ( v8 )
      _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 30, 0x15u);
    v14 = 0;
    v13 = CurrentThread;
    v9 = sub_1406F83A0(1LL, &v13, 0LL, 0LL);
    if ( v9 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 30, 7u);
      if ( v8 )
        _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 30, 0x15u);
    }
    sub_140241C40();
    return (unsigned int)v9;
  }
  return result;
}
