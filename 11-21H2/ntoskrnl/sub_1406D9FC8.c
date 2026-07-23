/*
 * XREFs of sub_1406D9FC8 @ 0x1406D9FC8
 * Callers:
 *     sub_1406D9E90 @ 0x1406D9E90 (sub_1406D9E90.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140815360 @ 0x140815360 (sub_140815360.c)
 *     sub_1409DB2FC @ 0x1409DB2FC (sub_1409DB2FC.c)
 *     sub_1409DB4B0 @ 0x1409DB4B0 (sub_1409DB4B0.c)
 *     sub_1409DB664 @ 0x1409DB664 (sub_1409DB664.c)
 */

__int64 sub_1406D9FC8()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int i; // esi
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v1 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16C28, 0LL);
  v3 = (unsigned int)dword_140C16C20;
  if ( dword_140C16C20 )
  {
    v1 = sub_1409DB664(v2, (unsigned int)dword_140C16C20);
    if ( v1 < 0 )
      v1 = 0;
    if ( (_DWORD)v3 )
    {
      v6 = qword_140C16820;
      do
      {
        v7 = *v6;
        if ( (int)sub_1409DB2FC(*v6, &v9) >= 0 )
        {
          v10[0] = v9;
          v10[1] = *(unsigned __int16 *)(v7 + 16);
          v10[2] = *(_DWORD *)(v7 + 20);
          v1 = sub_1409DB4B0(1062LL, 3LL, v10);
          if ( v1 < 0 )
            v1 = 0;
        }
        else
        {
          v1 = 0;
        }
        ++v6;
        --v3;
      }
      while ( v3 );
    }
  }
  for ( i = 0; i < dword_140C16C20; qword_140C16820[v8] = 0LL )
  {
    v8 = i;
    sub_140815360(5LL, qword_140C16820[i++]);
  }
  dword_140C16C20 = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16C28, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
