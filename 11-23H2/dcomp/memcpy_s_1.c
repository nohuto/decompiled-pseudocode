/*
 * XREFs of memcpy_s_1 @ 0x1800F7440
 * Callers:
 *     ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z @ 0x1800F1CD8 (-FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_1(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  void *v8; // rcx
  errno_t *v9; // rax
  errno_t v10; // ebx

  if ( !SourceSize )
    return 0;
  v8 = qword_180220CE0;
  if ( !qword_180220CE0 )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(qword_180220CE0, Source, SourceSize);
    return 0;
  }
  memset_0(qword_180220CE0, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v9 = (errno_t *)_o__errno(v8, DestinationSize, Source, SourceSize);
    v10 = 22;
LABEL_5:
    *v9 = v10;
    invalid_parameter_noinfo();
    return v10;
  }
  if ( DestinationSize < SourceSize )
  {
    v9 = (errno_t *)_o__errno(v8, DestinationSize, Source, SourceSize);
    v10 = 34;
    goto LABEL_5;
  }
  return 22;
}
