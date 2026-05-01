/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E940
 * Callers:
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18001E8B4 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001FBF0 (-GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180018778 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx
  ExecutionModel::_ResourceSetInfo *result; // rax

  *(_DWORD *)this = -1;
  *((_DWORD *)this + 2) = 101;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 32;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  `vector constructor iterator'(
    (char *)this + 80,
    24LL,
    3LL,
    (void (__fastcall *)(char *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 26) = 1;
  *((_DWORD *)this + 32) = 2;
  v2 = (_DWORD *)((char *)this + 152);
  *((_DWORD *)this + 88) = 0;
  v3 = 50LL;
  *((_QWORD *)this + 45) = 0LL;
  while ( v3 )
  {
    *v2++ = 101;
    --v3;
  }
  *((_DWORD *)this + 93) = 0;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 42) = 0;
  *((_DWORD *)this + 11) = 1;
  *((_DWORD *)this + 4) = 0;
  result = this;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_DWORD *)this + 8) = 101;
  return result;
}
