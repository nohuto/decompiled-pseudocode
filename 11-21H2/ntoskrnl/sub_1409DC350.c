/*
 * XREFs of sub_1409DC350 @ 0x1409DC350
 * Callers:
 *     sub_14062C800 @ 0x14062C800 (sub_14062C800.c)
 *     sub_1409DC58C @ 0x1409DC58C (sub_1409DC58C.c)
 *     sub_1409DC80C @ 0x1409DC80C (sub_1409DC80C.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_1409DC350(char a1, _QWORD *a2, PVOID *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _WORD *i; // rcx
  int v15; // [rsp+20h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&stru_140C165C0, 1u);
  v9 = 0;
  v15 = 0;
  if ( qword_140D3B0E8 )
  {
    v10 = MmMapIoSpaceEx(qword_140D3B0E8, (unsigned int)dword_140D3B040, 4u);
    *a3 = (PVOID)v10;
    if ( v10 )
    {
      *a4 = dword_140D3B040;
      v11 = *a3;
      goto LABEL_7;
    }
    v9 = -1073741670;
  }
  else
  {
    v9 = -1073741823;
  }
  v11 = 0LL;
  v15 = v9;
LABEL_7:
  if ( v9 < 0 )
  {
LABEL_20:
    ExReleaseResourceLite(&stru_140C165C0);
    sub_1402F9540((__int64)KeGetCurrentThread());
    return (unsigned int)v15;
  }
  *a2 = 0LL;
  v12 = &v11[(unsigned int)dword_140D3B040];
  v15 = -1073741823;
  while ( v11 < v12 )
  {
    if ( *v11 == a1 )
    {
      *a2 = v11;
      v15 = 0;
      break;
    }
    for ( i = &v11[(unsigned __int8)v11[1]]; *i && i < (_WORD *)v12; i = (_WORD *)((char *)i + 1) )
      ;
    v11 = i + 1;
  }
  if ( v15 < 0 )
  {
    if ( *a3 )
      MmUnmapVideoDisplay(*a3, (unsigned int)*a4);
    goto LABEL_20;
  }
  return (unsigned int)v15;
}
