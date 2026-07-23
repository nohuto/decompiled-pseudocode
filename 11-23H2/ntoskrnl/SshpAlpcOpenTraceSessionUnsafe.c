/*
 * XREFs of SshpAlpcOpenTraceSessionUnsafe @ 0x14084C670
 * Callers:
 *     SshpSessionManagerSendControlEvent @ 0x1408743E8 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14031E170 (KeCancelTimer2.c)
 *     SshpAlpcSendMessage @ 0x14084CAE0 (SshpAlpcSendMessage.c)
 */

__int64 __fastcall SshpAlpcOpenTraceSessionUnsafe(__int64 a1, unsigned int a2, int *a3)
{
  int *v4; // rdi
  int v5; // eax
  int **v6; // rcx
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  if ( a2 > 1 || a3 && !*((_QWORD *)a3 + 2) )
    return 3221225485LL;
  v4 = &dword_140C384F8[48 * a2];
  LOBYTE(a1) = *((_BYTE *)v4 + 4);
  if ( !(_BYTE)a1 && !a3 )
    return 3221227264LL;
  if ( *v4 == -1 )
    return 3221225621LL;
  v5 = *v4 + 1;
  *v4 = v5;
  if ( v5 == 1 )
  {
    if ( (_BYTE)a1 )
    {
      KeCancelTimer2((__int64)(v4 + 2));
    }
    else
    {
      SshpAlpcSendMessage(a1, 1LL, 4LL, &v8, 0);
      v6 = (int **)*((_QWORD *)v4 + 23);
      if ( *v6 != v4 + 44 )
        __fastfail(3u);
      *(_QWORD *)a3 = v4 + 44;
      *((_QWORD *)a3 + 1) = v6;
      *v6 = a3;
      *((_QWORD *)v4 + 23) = a3;
    }
  }
  return *((_BYTE *)v4 + 4) == 0 ? 0x103 : 0;
}
